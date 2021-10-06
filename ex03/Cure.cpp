/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:53:18 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 16:05:46 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : _type("ice")
{
	std::cout << this->_type << " constructed\n";
}

Cure::~Cure()
{
	std::cout << this->_type << " destroyed\n";
}

Cure::Cure(Cure const & ref) : _type(ref.getType())
{
	std::cout << this->_type << " constructed from copy\n";
}

Cure & Cure::operator=(Cure const & ref)
{
	this->_type = ref.getType();
	return (*this);
}

std::string const & Cure::getType( void ) const
{
	return (this->_type);
}

Cure *Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::string target_name = target.getName();

	std::cout << " heals " << target_name << "\'s wounds" << std::endl;
}