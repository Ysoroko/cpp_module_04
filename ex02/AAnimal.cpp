/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:34:18 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/05 16:37:38 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Aanimal";
	std::cout << "AAnimal was constructed\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal was destroyed\n";
}

AAnimal::AAnimal(AAnimal const & ref)
{
	this->type = ref.getType();
	std::cout << "AAnimal was constructed from a copy\n";
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}