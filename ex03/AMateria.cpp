/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:34:53 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 15:42:46 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Abstract materia has beed created\n";
}

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

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}