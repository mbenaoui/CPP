// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
// using namespace std;

// class Point {
// private:
// 	int x, y;

// public:
// 	Point(int x1, int y1)
// 	{
// 		x = x1;
// 		y = y1;
// 	}

// 	// Copy constructor
// 	Point(const Point& p1)
// 	{
// 		x = p1.x;
// 		y = p1.y;
// 	}

// 	int getX() { return x; }
// 	int getY() { return y; }
// };

// int main()
// {
// 	Point p1(10, 15); // Normal constructor is called here
// 	Point p2(p1); 
// 	Point p3 = p2;// Copy constructor is called here

// 	// Let us access values assigned by constructors
// 	cout << "p1.x = " << p1.getX()
// 		<< ", p1.y = " << p1.getY();
// 	cout << "\np2.x = " << p2.getX()
// 		<< ", p2.y = " << p2.getY();
// 	cout << "\np3.x = " << p3.getX()
// 		<< ", p3.y = " << p3.getY();
// 	return 0;
// }
//#include <iostream>
using namespace std;
class A
{
public:
    A(int a)
    {
        length = a;
    }
    ~A(){}

    friend A operator +(A& var1, A& var2);
    A& operator=(A &other);
    int length;

};

// A operator +(A& var1, A& var2)
// {
//     return A(var1.length + var2.length);
// }

A& A::operator=(A &other)
{
	std :: cout << length << std :: endl;
   this->length = other.length;
	std :: cout << length << std :: endl;
    return (*this);
}


int main()
{
    A a=1;
    A b(2);
    A c(3);
    c = a;   // work
 //  c = a + b;  // does not work
    cout << c.length ;
    return 0;
}