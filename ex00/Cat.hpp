/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:42:29 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 16:09:36 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat: public AAnimal
{
	protected:
		std::string	type;

	public:
		Cat();
		~Cat();
		Cat(Cat & ref);
		Cat & operator=(Cat const & rhs);
		void makeSound();
};

#endif