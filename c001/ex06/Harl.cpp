#include "Harl.hpp"

void Harl::debug()
{
    std  :: cout << "[ DEBUG ] " << std :: endl;
    std:: cout << "I love having extra bacon f'or my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std :: endl;
}
void Harl::info()
{
    std  :: cout << "[ INFO ]" << std :: endl;
    std :: cout << "I cannot believe adding extra bacon costs more money. " 
    << "you didn't put enough bacon in my burger! " << "If you did, I wouldn't be asking for more! "<< std:: endl;
}

void Harl::warning()
{
    std  :: cout << "[ WARNING ]" << std :: endl;
    std :: cout << "I think I deserve to have some extra bacon for free." 
                << "I ve been coming for years whereas you started working here since last month." << std :: endl;
}
void Harl :: error()
{
    std  :: cout <<  "[ ERROR ]" << std :: endl;
    std :: cout << "This is unacceptable! I want to speak to the manager now." << std :: endl;
}

void Harl ::complain(std :: string level)
{
    int i = 0;
    std::string moods[] = {"debug", "info", "warning", "error"};
	void (Harl:: *mood[]) (void) = {
		mood[0] = &Harl::debug,
        mood[1] = &Harl::info,
        mood[2] = &Harl::warning, 
        mood[3] = &Harl::error,
	};
     while(i < 4)
     {
        if(moods[i] == level )
        {
            (this->*mood[i])(); 
                return;
        }
        i++;
     }
    
 }
//  int main(int ac , char **av)

// {
// 	int i = 0;
//     Harl harl;
//      std::string parts[] = {"debug", "info", "warning", "error"};
//     if(ac != 1)
//     {
//         while (i < 4)
//         {
//             if(parts[i] == av[1])
//                 break;
//             i++;
//         }
//         switch (i)
//         {
//         case 0:
//             while(i < 4)
//             harl.complain(parts[i++]);
//             break;
//         case 1:
//             while(i < 4)
//             harl.complain(parts[i++]);
//             break;
//         case 2:
//             while(i< 4)
//             harl.complain(parts[i++]);
//             break;
//         case 3:
//             while(i < 4)
//             harl.complain(parts[i++]);
//             break;
//         default:
//             break;
//         }
            

//     }
//     else
//         std :: cout << "[ Probably complaining about insignificant problems ]" << std :: endl;
// }