/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:32:02 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 14:41:27 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia source was created\n";
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const & ref)
{
	for (int i = 0; i < 4; i++)
	{
		// Deep copy!
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	std::cout << "Materia source was created from copy\n";
}

MateriaSource & MateriaSource::operator=(MateriaSource const & ref)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Materia source was destoryed\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while ((this->_inventory)[i] == 0 && i < 4)
		i++;
	if (i >= 4)
		return ;
	(this->_inventory)[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Specified materia type does not exit\n";
		return ;
	}
	return (((this->_inventory)[i])->clone());
}

