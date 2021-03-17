// C++ Program to Calculate Power of a Number

#include<iostream>
using namespace std;
int main()
{
    int x,Power;
   
    
    cout<< "Enter a : ";
    cin>>x;
     
     Power=x*x;
    
    cout << "Power of a Number :" << Power ;
    
    return 0;
}

------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
    int exponent;
    float base,result=1;
   
    
    cout<< "Enter base and exponent respectively: ";
    cin>>base>>exponent;
         cout << base<< "^" << exponent << "=";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;
    
    return 0;
}