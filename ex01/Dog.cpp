/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:06:09 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/05 13:37:28 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "A dog was constructed with its brain\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A dog was destroyed, its brain too\n";
}

Dog::Dog(Dog & ref)
{
	this->brain = new Brain;
	this->type = ref.getType();
	std::cout << "A dog was constructed from copy, but has a brain on its own\n";
}

Dog & Dog::operator=(Dog const & rhs)
{
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}

std::string Dog::getType( void ) const
{
	return (this->type);
}
