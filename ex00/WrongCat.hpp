#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat & ref);
		WrongCat & operator=(WrongCat const & rhs);
		void makeSound() const;
};

#endif