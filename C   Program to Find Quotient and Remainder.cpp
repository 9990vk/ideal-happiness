#include<iostream>
using namespace std;
int main()
{
	int quotient, remainder, dividend,divisor;
    
    cout<<"\nEnter the dividend: " ;
    cin>>dividend;
    cout<<"\nEnter the divisor: " ;
    cin>>divisor;
    quotient=dividend/divisor;
    cout<<"quotient is = "<<quotient<<"\n";
	remainder=dividend-(quotient*divisor);
    cout<<"remainder is = "<<remainder<<"\n";
 return 0;
}