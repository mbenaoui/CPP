
#include "HumanA.hpp"
#include <string>

HumanA::~HumanA()
 {
    std :: cout << "HumanA Destrucotr" << std :: endl;
 }

HumanA::HumanA( std::string Name, Weapon &Weapon ):  _Weapon(Weapon){
    // std::cout <<  _Weapon.getType() << std:: endl;
    this->_Weapon = Weapon;
    this->Type = Name;
}

std::string HumanA::getType()
{
    return (this->Type);
}
void HumanA::setName(std:: string Name)
{
    this->Type = Name;
}
void HumanA::attack()
{
    std::cout << this->Type << "  attacks with their   " <<  _Weapon.getType() << std:: endl;
}
// Bob attacks with his crude spiked club
// Bob attacks with his some other type of club
// HumanA Destructor
// Weapon Destructor