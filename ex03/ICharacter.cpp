/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:18:52 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 15:27:56 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

ICharacter::~ICharacter()
{
	std::cout << "Icharacter was destroyed\n";
}

std::string const & ICharacter::getName() const
{
	return (this->_name);
}

void ICharacter::equip(AMateria *m)
{
	std::cout << "Icharacter equips " << m->getType() << std::endl;
}

void ICharacter::unequip(int idx)
{
	std::cout << "Icharacter unequips " << idx << std::endl;
}

void ICharacter::use(int idx, ICharacter& target)
{
	std::cout << "Icharacter uses" << idx << " on " << target.getName() << std::endl;
}


