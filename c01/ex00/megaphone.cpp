/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:43:49 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/10/14 10:43:53 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iostream>

void
megaphone(int argc, char *argv[])
{
    for (int i = 1; i < argc; i += 1)
    {
        for (int j = 0; j < (int)strlen(argv[i]); j += 1)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
}

int
main(int argc, char *argv[])
{
    if (argc > 1)
    {
       megaphone(argc, argv);
      // std::cout << "* LOUD*" << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}

//using namespace std;

// int main() {

//   // convert 'a' to uppercase
//   char ch = toupper('b');

//   std::cout << ch;

//   return 0;
// }
