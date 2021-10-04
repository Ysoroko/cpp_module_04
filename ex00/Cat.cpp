/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:49:14 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 16:10:24 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "cat";
	std::cout << "A cat was constructed\n";
}

Cat::~Cat()
{
	std::cout << "A cat was destroyed\n";
}

Cat::Cat(Cat & ref)
{
	this->type = "cat";
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void makeSound()
{
	std::cout << "Meow meow\n";
}