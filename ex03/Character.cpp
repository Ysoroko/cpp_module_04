/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:43:52 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 14:29:45 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "A character named " << name << " was created\n";
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character named " << this->_name << " was destroyed\n";
}

std::string const & Character::getName() const
{
	return (this->_name);
}

Character::Character(Character const & ref) : _name(ref.getName())
{
	for(int i = 0; i < 4; i++)
	{
		// Deep copy!
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}

}

Character & Character::operator=(Character const & ref)
{
	// Impossible to change name because it's constant
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while ((this->_inventory)[i] == 0 && i < 4)
		i++;
	if (i >= 4)
		return ;
	(this->_inventory)[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	(this->_inventory)[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	std::string	name = this->getName();

	if (!(this->_inventory)[idx])
		return ;
	std::cout << name;
	((this->_inventory)[idx])->use(target);
}
