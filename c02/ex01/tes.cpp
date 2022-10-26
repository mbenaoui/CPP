// #include <iostream>

// using namespace std;

// void binary(unsigned int n)
// {
// 	for(int i = 256; i > 0; i = i/2) {
// 		if(n & i) 
// 			cout << " 1";
// 		else
// 			cout << " 0";
// 	}
// 	cout << endl;
// }

// bool getBit(int n, int index)
// {
// 	return ( (n / (1 << index) ) > 0);
// }

// int setBit(int n, int index, bool b)
// {
// 	if(b)
// 		return (n | (1 << index)) ;	
// 	else {
// 		int mask = ~(1 << index);
// 		return n & mask;
// 	}
// }
// int main()
// {
// 	int num, index;

// 	num = 16;

// 	cout << "Input" << endl;
// 	for (int i = 7; i >= 0; i--) 
// 		cout << getBit(num,i) << " ";
// 	cout << endl;

// 	/* set bit */
// 	index = 6;
// 	cout << "Setting " << index << "-th bit" << endl;
// 	num = setBit(num, index, true);
// 	for (int i = 7; i >= 0; i--) 
// 		cout << getBit(num,i) << " ";
// 	cout << endl;

// 	/* unset (clear) bit */
// 	index = 4;
// 	cout << "Unsetting (Clearing) " << index << "-th bit" << endl;
// 	num = setBit(num, index, false);
// 	for (int i = 7; i >= 0; i--) 
// 		cout << getBit(num,i) << " ";
// 	cout << endl;

// 	return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() {
//       // a = 5(00000101), b = 9(00001001)
//     int a = 5, b = 9;
 
//     // The result is 00000001
//     cout<<"a = " << a <<","<< " b = " << b <<endl;
//     cout << "a & b = " << (a & b) << endl;
 
//     // The result is 00001101
//     cout << "a | b = " << (a | b) << endl;
 
//     // The result is 00001100
//     cout << "a ^ b = " << (a ^ b) << endl;
 
//     // The result is 11111010
//     cout << "~a = " << (~a) << endl;
 
//     // The result is 00010010
//     cout<<"b << 1" <<" = "<< (b << 1) <<endl;
 
//     // The result is 00000100
//     cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
//     return 0;
// }
#include <iostream>
using namespace std;

class Date
{
    int mo, da, yr;
public:
    Date(int m, int d, int y)
    {
        mo = m; da = d; yr = y;
    }
    friend ostream& operator<<(ostream& os, const Date& dt);
};

ostream& operator<<(ostream& oss, const Date& dt)
{
    oss << dt.mo << '/' << dt.da << '/' << dt.yr;
    return oss;
}

int main()
{
    Date dt(5, 6, 9222);
    cout << dt;
}