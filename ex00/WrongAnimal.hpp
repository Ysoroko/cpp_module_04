/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:50:11 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 17:50:11 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

// Abstract class Animal
class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal & ref);
		WrongAnimal & operator=(WrongAnimal const & rhs);

		// virtual member function = "method"
		// this makes the program to decide which method to use during the 
		// execution (and not compilation)
		void makeSound() const;
		std::string getType( void ) const;
};

#endif