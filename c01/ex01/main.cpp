/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:44:05 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/10/14 10:44:08 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main()
{
  PhoneBook sat[8];
  std:: string comd;
    int i = 0;
  int idx = 0;
     std::cout << "Please enter a command (SEARCH/ ADD / EXIT)\n> ";
    while (std::getline(std::cin, comd))
    {
      if(comd.compare("ADD") == 0)
      {
        if(idx%8 == 0)
            idx = 0;
        sat[idx].input_contact(idx);
        i++;
         if(i > 8)
            i--;
        idx++;
      std::cout << "Please enter a command (SEARCH/ ADD / EXIT)\n> ";
      }
      else if (comd.compare("SEARCH") == 0)
      {  
        if(i)
        {
          show_prview(sat, i);
          select_ondex(sat, i);
        }
        else 
          std::cout<< "THE TABLE IS EMPTY"<< std ::endl;
         std::cout << "Please enter a command (SEARCH/ ADD / EXIT)\n> ";
      }
      else if(comd.compare("EXIT") == 0)
        exit(0);
    else 
     std::cout << "Please enter a command (SEARCH/ ADD / exit)\n>> ";
    }
  }
