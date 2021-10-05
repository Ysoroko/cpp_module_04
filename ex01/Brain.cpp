/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:31:38 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/05 15:54:22 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Brainy brain";
	std::cout << "A brain has been constructed and filled with ideas\n";
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "A brain has been destroyed\n";
}

Brain::Brain(Brain & ref)
{
	std::string *ref_ideas = ref.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref_ideas[i] + " stolen";
	std::cout << "A brain has been copy constructed and stole the other's ideas\n";
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}