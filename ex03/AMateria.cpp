/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:52:06 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 15:00:36 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Abstract materia has beed constructed\n";
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia has beed destroyed\n";
}

AMateria::AMateria(AMateria const & ref) : _type(ref._type)
{
	std::cout << "Abstract materia has beed constructed from a copy\n";
}

AMateria & AMateria::operator=(AMateria const & ref)
{
	std::cout << "Operator = overloaded " << ref._type << " to " << this->_type << std::endl;
	std::cout << "Not much to equalize here because the only member variable is const\n";
}


std::string const & AMateria::getType() const
{
	return(this->_type);
}
