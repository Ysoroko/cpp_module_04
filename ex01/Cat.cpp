/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:49:14 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/05 14:02:39 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "A cat was constructed, with its new brain\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A cat was destroyed, his brain deleted\n";
}

Cat::Cat(Cat & ref)
{
	this->type = ref.getType();
	this->brain = new Brain;
	std::cout << "A cat was constructed from copy, but has a brain on its own\n";
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow meow\n";
}

std::string Cat::getType( void ) const
{
	return (this->type);
}