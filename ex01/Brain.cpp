/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:31:38 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/05 10:47:56 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::string	id[100];
	this->ideas = id;
	std::cout << "A brain has been constructed and filled with ideas\n";
}

Brain::~Brain()
{
	std::cout << "A brain has been destroyed\n";
}

Brain::Brain(Brain & ref)
{
	this->ideas = ref.ideas;

}

Brain & Brain::operator=(Brain const & rhs)
{
	this->ideas = rhs.ideas;
	return (*this);
}