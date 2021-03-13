#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float r,circum,area;
	cout<<"Find the area and circumference of any circle\n";
	cout<<"Input the radius(1/2 of diameter) of a circle :";
	cin>>r;
	circum=2*3.14*r;
	area=3.14*(r*r);
    cout<<"The area of the circle is :"<<area << "\n";
	cout<<"The circumference of the circle is :"<<circum ;
return 0;
}