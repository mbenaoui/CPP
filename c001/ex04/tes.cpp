// C++ program to implement close() function
#include <fstream>
#include <iostream>
using namespace std;
 
std:: string test_name(std::string line , std :: string av2, std :: string av3)
 {

	std:: string tes;
	int start = line.find(av2);
	if(start == -1)
		return (line);
	
	while (start != -1)
	{
		line.erase(start, av2.length());
		line.insert(start, av3);

		start = line.find(av2);
	}
	
	return (line);
 }
int main(int ac, char **av)
{
	if( ac == 4)
	{

	std:: string line;
	std::string f_name(av[1]);
	std::ifstream myfile (av[1]);
	ifstream nfile;
	std:: string tes;
	if(myfile)
	{
		std :: ofstream f_out (f_name +".replace");
		while(getline(myfile, line))
		{
			line =  test_name(line, av[2], av[3]);
			f_out << line << std :: endl;
			}
	}
	else 
	std :: cout << "Erooor" << std :: endl;
	}
	else 
	std:: cout << "the number of arguments you entered is not 4"<< std:: endl;
}