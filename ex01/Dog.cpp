/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:06:09 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/05 16:01:42 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "A dog was constructed with its brain\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A dog was destroyed, its brain too\n";
}

Dog::Dog(Dog & ref)
{
	std::cout << "Creating a copy dog brain\n";
	this->brain = new Brain(*(ref.getBrain()));
	this->type = ref.getType();
	std::cout << "A dog was constructed from a dog copy, but has a brain on its own\n";
}

//Dog::Dog(Animal const & ref)
//{
//	this->brain = new Brain;
//	this->type = "Dog";
//	if (ref.getType() == "Cat")
//		std::cout << "A dog was constructed from a cat animal, with a brand new brain\n";
//	else
//		std::cout << "A dog was constructed from a dog animal, with a brand new brain\n";
//}

Dog & Dog::operator=(Dog const & rhs)
{
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}

std::string Dog::getType( void ) const
{
	return (this->type);
}

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}