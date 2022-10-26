#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	Name;
	public:
		Zombie(std :: string name);
		~Zombie();
        void  setname(std::string Name);
		void			announce( void );
};

void Zombie ::announce( void ){
    std::cout << this->Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie :: Zombie(std:: string name) 
{
    std :: cout << "ZOMBIE : " << name   << " : is born " << std :: endl;

}

Zombie :: ~Zombie()
{
  //  std::cout<<"dsjfkdsjfjs\n";
    std:: cout << "ZOMBIE : " << this->Name << " : is dead" << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->Name = name;
}
Zombie *newZombie(std:: string name)
{
    Zombie *zom;
    zom = new Zombie(name);
    zom->setname(name);
    return (zom);
}
void randomChump( std::string name )
{
	Zombie *zom;
	zom = newZombie(name);
	zom->announce();
    zom-> ~Zombie();
	//delete zom;
}
int main()
{
    Zombie *Zombie1 =newZombie("badr");
    Zombie1->announce();
    delete(Zombie1);
    randomChump("simo");
}
