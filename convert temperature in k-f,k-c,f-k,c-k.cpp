#include<iostream>
using namespace std;
int main()
{
float fahrenheit, celsius,kelvin;
cout << "Enter the temperature in kelvin : ";
cin >> kelvin;
fahrenheit = (kelvin-273.15)*9/5+32;
cout << "Enter the temperature in kelvin : "<<kelvin << "\n";
cout << "Enter the temperature in fahrenheit : "<<fahrenheit << "\n";
cout << "---------------------------------------------\n";
cout << "Enter the temperature in kelvin : ";
cin >> celsius;
celsius = kelvin-273.15;
cout << "Enter the temperature in kelvin : "<<kelvin << "\n";
cout << "Enter the temperature in celsius : "<<celsius <<"\n" ;
cout << "---------------------------------------------\n";
cout << "Enter the temperature in fahrenheit : ";
cin >> fahrenheit;
kelvin = (fahrenheit-32)*5/9+273.15;
cout << "Enter the temperature in fahrenheit : "<<fahrenheit << "\n";
cout << "Enter the temperature in kelvin : "<<kelvin << "\n";
cout << "---------------------------------------------\n";
cout << "Enter the temperature in celsius : ";
cin >> celsius;
kelvin = celsius+273.15;
cout << "Enter the temperature in celsius : "<<celsius << "\n";
cout << "Enter the temperature in kelvin : "<<kelvin <<"\n" ;
return 0;
}