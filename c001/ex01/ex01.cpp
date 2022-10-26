#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	Name;
	public:
		Zombie(void);
		~Zombie();
        void  setname(std::string Name);
		void			announce( void );
};

void Zombie ::announce( void ){
    std::cout << this->Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie :: Zombie(void) 
{
    std :: cout << "ZOMBIE : is born " << std :: endl;

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
// Zombie *newZombie(std:: string name)
// {
//     Zombie *zom;
//     zom = new Zombie(name);
//     zom->setname(name);
//     return (zom);
// }
// void randomChump( std::string name )
// {
// 	Zombie *zom;
// 	zom = newZombie(name);
// 	zom->announce();
//     zom-> ~Zombie();
// 	//delete zom;
// }
Zombie *zombieHorde( int N, std::string name )
{

    Zombie *zoms = new Zombie[N];
    for( int i = 0 ; i < N ; i++)
    {
        zoms[i].setname(name);
    }
   return (zoms);
}
int main()
{
 int N = 3;
 Zombie *zoms = zombieHorde(N, "simo");
 for(int i = 0; i < N; i++)
 {
    zoms[i].announce();
 }
 
   delete []  zoms;

    //delete zoms;
    //zoms-> ~Zombie();

}
 