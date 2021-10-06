/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:14:53 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 11:10:07 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const & ref);
		~Character();
		Character & operator=(Character const & ref);
		std::string const & getName() const = 0;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target) = 0;
	private:
		AMateria			*(_inventory[4]);
		std::string const	_name;
};

#endif