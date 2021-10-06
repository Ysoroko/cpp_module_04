/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:52:17 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 10:39:53 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : _type("ice")
{
	std::cout << this->_type << " constructed\n";
}

Ice::~Ice()
{
	std::cout << this->_type << " destroyed\n";
}

Ice::Ice(Ice const & ref) : _type(ref.getType())
{
	std::cout << this->_type << " constructed from copy\n";
}

Ice & Ice::operator=(Ice const & ref)
{
	this->_type = ref.getType();
	return (*this);
}

std::string Ice::getType( void ) const
{
	return (this->_type);
}

Ice *Ice::clone() const
{
	Ice	*ret = new Ice;
	return (ret);
}

void Ice::use(ICharacter& target) const
{
	std::string target_name = target.getName();

	std::cout << " shoots an ice bolt at " << target_name << std::endl;
}