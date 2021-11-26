/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:43:52 by ysoroko           #+#    #+#             */
/*   Updated: 2021/11/26 16:37:25 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "A character named \"" << _name << "\" was created\n";
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

Character::Character(Character const & ref) : _name(ref.getName() + "_copy")
{
	for(int i = 0; i < 4; i++)
	{
		// Deep copy!
		if ((ref._inventory)[i])
			(this->_inventory)[i] = (ref._inventory[i])->clone();
	}
	std::cout << "A character named " << _name << " was created from copy of " << ref._name << "\n";
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
	return (*this);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
	{
		std::cout << this->_name << " tried to equip nothing and it did nothing\n";
		return ;
	}
	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << " can't equip more than 4 Materia";
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << this->_name << " equipped materia " << m->getType() << " in slot " << i << "\n";
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << this->_name << " tried to unequip nothing at slot " << idx << " and it did nothing\n";
	else if (!(this->_inventory)[idx])
		std::cout << this->_name << " has nothing equipped at slot " << idx << " so he can't unequip it\n";
	else
	{
		AMateria *ptr = (this->_inventory)[idx];
		std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
		(this->_inventory)[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->_inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	std::cout << name;
	((this->_inventory)[idx])->use(target);
}

// used to avoid leaks when using unequip with a deep copy character
AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->_inventory)[idx];
}