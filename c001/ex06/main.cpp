#include "Harl.hpp"
#include <iostream>

int main(int ac , char **av)

{
	int i = 0;
    Harl harl;
     std::string parts[] = {"debug", "info", "warning", "error"};
    if(ac != 1)
    {
        while (i < 4)
        {
            if(parts[i] == av[1])
                break;
            i++;
        }
        switch (i)
        {
        case 0:
            while(i < 4)
            harl.complain(parts[i++]);
            break;
        case 1:
            while(i < 4)
            harl.complain(parts[i++]);
            break;
        case 2:
            while(i < 4)
            harl.complain(parts[i++]);
            break;
        case 3:
            while(i < 4)
            harl.complain(parts[i++]);
            break;
        default:
            break;
        }
            

    }
    else
        std :: cout << "[ Probably complaining about insignificant problems ]" << std :: endl;
}