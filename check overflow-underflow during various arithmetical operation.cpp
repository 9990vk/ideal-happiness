#include<iostream>
using namespace std;
int main()
{
cout << " Check overflow/underflow during various arithmetical operation : " << "\n" ;

int a1= 2147483647;
cout << " Overflow the integer range and set in minimum range : " << a1 + 1 << "\n";
cout << " Increasing from its minimum range :  " << a1 + 2 << "\n";
cout << " Product is : " << a1 * a1 << "\n";

int a2= -2147483648;
cout << " Overflow the integer range and set in maximum range : " << a2 - 1 << "\n";
cout << " Increasing from its maximum	 range :  " << a2 - 2 << "\n";
cout << " Product is : " << a2 * a2 << "\n";

	return 0;
}