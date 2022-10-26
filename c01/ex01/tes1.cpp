/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tes1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:44:29 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/10/14 10:44:33 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <algorithm>

#include <iomanip>
#include <string>
 
// using namespace std;
// // // int main()
// // // {
// // //    // std::cout << "simo" << std :: endl;
// // //   static int x  , y;
// // //    cout << "enter two" << endl;
// // //    cin >> x >> y;
// // //    int z = x + y;
// // //    cout <<  z << endl;
// // // }

// class triangle{
// private:
//    float base;
//    float height;
// public:
//    triangle()
//    {
//       cout << "first comstructor\n";
//       base=0;
//       height=0;
//    }
//    triangle(int a , int b)
//    {
//       base = a;
//       height = b;
//       cout << "last constructor\n";
//    }
// void setBase_height(float x,float y)
// {
//    base = x;
//    height= y;
// }
// float area()
// {
//    return 0.5*base*height;
// }
// void printf()
// {
//    cout << "base = " << base << endl <<
//             "height = " << height << endl <<
//             "area = " << area() << endl;
// }
// };

// int main()
// {
//   triangle ob(5 , 6);
//   // ob.setBase_height(5, 10);
//    //cout << ob.area() << endl;
//   ob.printf();
// }
#include <iostream>
#include <string>
// using namespace std;

// int main()
// {
// 	string str;

// 	cout << "Please enter your name: \n";
// 	cout << "Hello, " << str
// 		<< " welcome to GfG !\n";

// 	return 0;
// }
#include <sstream>
class PhoneBook
{
  public:
    void input_contact(int idx);
    void print_clm(std::string text);
    void print_prive(int indx);
    void printf_page(void);
  private:

    std:: string first_name_;
    std:: string last_name_;
    std:: string Nick_name;
    std:: string phone_number_;
    std:: string descrit__;

};
void PhoneBook::input_contact(int idx)
{
  idx     = idx;
  std::cout << "Please enter first_name_ : ";
   	std::getline(std::cin, first_name_);
    while(first_name_.empty() )
    {
      std::cout << "Please enter first_name_ : ";
   	  std::getline(std::cin, first_name_);
    }
    std::cout << "Please enter last_name_ : ";
   	std::getline(std::cin, last_name_);
    while(last_name_.empty())
    {
      std::cout << "Please enter last_name_ : ";
   	  std::getline(std::cin, last_name_);
    }
    std::cout << "Please enter Nick_name_ : ";
   	std::getline(std::cin, Nick_name);
    while(Nick_name.empty())
    {
      std::cout << "Please enter Nick_name_ : ";
   	  std::getline(std::cin, Nick_name);
    }
    std::cout << "Please enter phone_number_ : ";
   	std::getline(std::cin, phone_number_);
    while(phone_number_.empty())
    {
     std::cout << "Please enter phone_number_ : ";
   	std::getline(std::cin, phone_number_);

    }
  std::cout << "Please enter descrit__ : ";
   	std::getline(std::cin, descrit__);
    while(descrit__.empty())
    {
     std::cout << "Please enter descrit__ : ";
    	std::getline(std::cin, descrit__);;
    }

}
void PhoneBook::printf_page(void)
{
  std::cout << "first_name_ : " << first_name_<< std:: endl;
  std::cout << "last_name_ : " << last_name_<< std:: endl;
  std::cout << " Nick_name : " <<  Nick_name<< std:: endl;
  std::cout << "phone_number_ : " << phone_number_<< std:: endl;
  std::cout << "descrit__ : " << descrit__<< std:: endl;
}
void  PhoneBook::print_clm(std::string text)
{
  if(text.length() > 10)
  {
    text = text.substr(0, 9) + ".";
    std::cout <<std::right<< std::setw(10) << text;
  }
  else 
    std::cout <<std::right<< std::setw(10) << text;
}
void PhoneBook::print_prive(int indx)
{
  print_clm(std::to_string(indx));
  std::cout << "|";
  print_clm(first_name_);
  std::cout << "|";
  print_clm(last_name_);
  std::cout << "|";
  print_clm(Nick_name);
  std::cout << "|";
  print_clm(phone_number_);
  std::cout << "|";
  print_clm(descrit__);
  std::cout << std::endl;
}

void show_prview(PhoneBook page[8],int j)
{
  std::cout  << std::setw(10) << "Index";
  std::cout << "|";
  std::cout << std::setw(10) << "First Name";
  std::cout << "|";
  std::cout << std::setw(10) << "Last Name";
  std::cout << "|";
  std::cout << std::setw(10) << "Nick Name";
  std::cout << "|";
  std::cout << std::setw(10) << "Cell Phone";
  std::cout << "|";
 std::cout  <<std::setw(10)<< "secret";
 std::cout << std:: endl;
  for(int i = 0; i< 8; i++)
  {
    if(i < j)
    page[i].print_prive(i);
  }

}
void select_ondex(PhoneBook page[8], int j)
{
  int select_indx;
  std::string input_index;
  std::stringstream ss;

  std::cout <<"select index : ";
  std :: getline(std::cin, input_index);
  ss << input_index;
  ss >> select_indx;
  if(select_indx >= 0 && select_indx <= j - 1 && ss.fail() == 0)
      page[select_indx].printf_page();
  else 
    std:: cout << "Sorry for those who find this number" << std:: endl;
}
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
