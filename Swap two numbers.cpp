#include <iostream>  
using namespace std;  
int main()  
{  
int a=25, b=39;      
cout<<"Before swap a= "<<a<<" b= "<<b<<"\n";      
a=a*b;  
b=a/b;    
a=a/b;   
cout<<"After swap a= "<<a<<" b= "<<b<<"\n";      
return 0;  
} 