#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
#include "Weapon.hpp"
class HumanA
{
	private:
		std::string Type;
        Weapon  &_Weapon;
	public:
        	HumanA( std::string Name, Weapon &_Weapon );
        ~HumanA();
       std:: string getType();
		void	setName( std::string Name );
        void attack(); 
};
#endif