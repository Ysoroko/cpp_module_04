/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:40:20 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 16:05:24 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

// Abstract class Animal
class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		~Animal();
		Animal(Animal & ref);
		Animal & operator=(Animal const & rhs);

		// virtual member function = "method"
		// this makes the program to decide which method to use during the 
		// execution (and not compilation)
		virtual void makeSound();
};

#endif