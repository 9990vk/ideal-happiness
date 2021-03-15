// C++ Program to Swap Two Numbers

#include <iostream>
using namespace std;

int main() 
{    
    int a=5,b=10,temp;

    cout << "\nBefore swapping." << "\n";
    cout << "a = " << a <<"\n"; 
    cout << "b = " << b ;
    
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << "\n";
    cout << "a = " << a <<"\n"; 
    cout << "b = " << b ;

    return 0;
}