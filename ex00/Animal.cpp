/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:40:13 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 17:58:18 by ysoroko          ###   ########.fr       */
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

void Animal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string Animal::getType( void ) const
{
	return (this->type);
}