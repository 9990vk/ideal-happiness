#include<iostream>
using namespace std;
int main()
{
	float km,miles;
	cout<<"Input distance in km :";
	cin>> km;
	miles=km/1.609344 ;
	cout<<"The 25 Km./hr. means :" << miles ;
	return 0;
}