#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
#include "Weapon.hpp"
class HumanB
{
	private:
		std::string Type;
        Weapon  *_Weapon;
	public:
        	HumanB( std::string Name);
        ~HumanB();
       std:: string getType();
		void	setName( std::string Name );
        void    setWeapon(  Weapon &Weapon );
        void    attack(); 
};
#endif