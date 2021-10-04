/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:40:13 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 16:04:21 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal was constructed\n";
	this->type = "animal";
}

Animal::~Animal()
{
	std::cout << "Animal was destroyed\n";
}

Animal::Animal(Animal & ref)
{
	this->type = ref.type;
	std::cout << "Animal was constructed from a copy\n";
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Animal::makeSound()
{
	std::cout << "... generic animal sound ...\n";
}