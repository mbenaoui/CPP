#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
class Weapon 
{
	private:
		std::string type;
	public:
        Weapon(std :: string name);
        ~Weapon();
       std:: string getType();
		void	setName( std::string Name );
};
#endif
