#include "HumanB.hpp"
#include <string>

HumanB::~HumanB()
 {
    std :: cout << "HumanB Destrucotr" << std :: endl;
 }

HumanB::HumanB( std::string Name): Type(Name){}

std::string HumanB::getType()
{
    return (this->Type);
}
void	HumanB::setWeapon(  Weapon &Weapon )
{
	this->_Weapon = &Weapon;
}

void HumanB::setName(std:: string Name)
{
    this->Type = Name;
}
void HumanB::attack()
{

    std::cout << ">>>>>>>>>>>>>>>>>>>" <<_Weapon->getType() << std:: endl;
    std::cout << this->Type << "attacks with their" <<  _Weapon->getType() << std:: endl;
}