#include<iostream>
using namespace std;
int main()
{
int number = 57;
cout << "The number is : " << number << "\n" ;
number++ ;
cout << "After post increment by 1 the number is :" << number << "\n";
++number;
cout << "After pre increment by 1 the number is : " << number << "\n";
number=number+1;
cout << "After increasing by 1 the number is : "  << number << "\n";
number--;
cout << "After post decrement by 1 the number is :" << number << "\n";
--number;
cout << "After pre decrement by 1 the number is : " << number << "\n";
number=number-1;
cout << "After decreasing by 1 the number is : " << number << "\n";

	return 0;
}