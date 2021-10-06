/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:46:28 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/06 15:17:12 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const & ref);
		Ice & operator=(Ice const & ref);
		std::string getType( void ) const;
		Ice *clone() const;
		void use(ICharacter& target);
	private:
		std::string _type;
};

#endif