#include<iostream>
using namespace std;
int main()
{
float fahrenheit, celsius;
cout << "Enter the temperature in celsius : ";
cin >> celsius;
fahrenheit = (celsius * 9.0) / 5.0 + 32;
cout << "Enter the temperature in celsius : "<<celsius << "\n";
cout << "Enter the temperature in fahrenheit : "<<fahrenheit << "\n";
cout << "---------------------------------------------\n";
cout << "Enter the temperature in fahrenheit : ";
cin >> celsius;
celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
cout << "Enter the temperature in fahrenheit : "<<fahrenheit << "\n";
cout << "Enter the temperature in celsius : "<<celsius ;
return 0;
}