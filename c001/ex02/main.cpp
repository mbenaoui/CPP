#include <iostream>
using std::string;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;
	//string &s = str;

	std::cout << "Display the string using the pointer:          " << *stringPTR << std::endl;
	std::cout << "Display the string using the reference:        " << stringREF<< std::endl;
	std::cout << "The Address in memory of the string:           " << str << std::endl;
	std::cout	<< "<----------------------------------------------------------------->" << std::endl;
	std::cout << "The Address in memory of the string:           " << &str << std::endl;
	std::cout << "The Address of the string using stringPTR:     " << stringPTR << std::endl;
	std::cout << "The Address of the string using stringERF:     " << &stringREF << std::endl;
}
