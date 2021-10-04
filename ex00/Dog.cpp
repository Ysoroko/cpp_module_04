/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:06:09 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 16:09:10 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "dog";
	std::cout << "A dog was constructed\n";
}

Dog::~Dog()
{
	std::cout << "A dog was destroyed\n";
}

Dog::Dog(Dog & ref)
{
	this->type = "dog";
	std::cout << "A dog was constructed from copy\n";
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void makeSound()
{
	std::cout << "Woof woof\n";
}