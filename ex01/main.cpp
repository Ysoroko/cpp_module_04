/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:51:56 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 17:51:56 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Shallow copy:
// ----------------------------------------
// A ---> [heap adress of a member] <--- B
// ----------------------------------------
// If the value inside the address is modified at any point, the value will be
// modified both in A and B since they both point to the same location in memory
// This is a bad idea. If any variables were allocated on the heap -> deep copy!

// Deep copy:
// -----------------------------------------------------------------
// A ---> [heap adress of a member] B ---> [heap adress of a member]
// -----------------------------------------------------------------
// Despite having the same values each object has its own allocated memory
// for its member variables

int main( void )
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	system("leaks ex01");
	std::cout << std::endl;
	std::cout << std::endl;

	const Animal	*(animal_array[4]);
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
	{
		animal_array[i] = new Dog();
	}
	std::cout << std::endl;
	// Half filled with cats
	for (int i = 2; i < 4; i++)
	{
		animal_array[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animal_array[i];
	}
	system("leaks ex01");
}
