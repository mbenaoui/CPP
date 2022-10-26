#include <sstream>
#include <iostream>
#include <iomanip>
 
// int main()
// {
//     std::string f1 = "hello";
//     std::string f2 = "1xcc";
//     f2.copy(f1, f2, 4);
//     std::cout<<f1<<std::endl;
//     std::cout << "no setw: [" << 42 << "]\n"
//               << "setw(10): [" << std::setw(10) << 42 << "]\n"
//               << "setw(10), several elements: [" << 89 << std::setw(6) << 12 << 34 << "]\n";
 
//     std::istringstream is("hello, world");
//     char arr[10];
 
//     is >> std::setw(6) >> arr;
//     std::cout << "Input from \"" << is.str() << "\" with std::setw(6) gave \""
//               << arr << "\"\n";
// }
#include <string>

// int main ()
// {
//   char buffer[20];
//   std::string str ("Test sghtring...");
//   std::size_t length = str.copy(buffer,7,0);
//   buffer[length]='\0';
//   std::cout << length<<'\n';
//   std::cout << "buffer contains: " << buffer << '\n';
//   return 0;
// }

 
// int main ()
// {
//   std::string pi = "pi is " + std::to_string(3.1415934);
//   std::string perfect = std::to_string(10+2+4+7+14) + " is a perfect number";
//   std::cout << pi << '\n';
//   std::cout << perfect << '\n';
//   return 0;;
// }
// int main ()
// {
//   std::string str="We think in generalities, but we live in details.";
//                                            // (quoting Alfred N. Whitehead)

//   std::string str2 = str.substr (3,7);     // "think"

//   std::size_t pos = str.find("we");      // position of "live" in str

//   std::string str3 = str.substr (pos);     // get from "live" to the end

//   std::cout << str2  << ' '<< str3 << '\n';

//   return 0;
// }
// int main () {
//   int n = -177;
//   std::cout.width(6); std::cout << std::internal << n << '\n';
//   std::cout.width(6); std::cout << std::left << n << '\n';
//   std::cout.width(6); std::cout << std::right << n << '\n';
//   return 0;
// }
int main ()
{
  std::string content;
  std::string line;
  std::cout << "Please introduce a text. Enter an empty line to finish:\n";
  // do {
  //   getline(std::cin,line);
  //   content += line + '\n';
  // } while (!line.empty());
  while(getline(std::cin,line))
  {
    if(line.empty())
      std::cout << "The text you introduced was:\n";
      else 
      std::cout << "simo";
  }
  std::cout << "The text you introduced was:\n";

  //return 0;
}