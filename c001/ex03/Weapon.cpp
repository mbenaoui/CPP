#include <iostream>
#include <string>
#include "Weapon.hpp"

 Weapon :: Weapon(std:: string name)
{
    this->type = name;
}
 Weapon::~Weapon()
 {
    std :: cout << "Wepon Destrucotr" << std :: endl;
 }
std::string Weapon::getType()
{
    return (this->type);
}
void Weapon::setName(std:: string Name)
{
    type = Name;
}
