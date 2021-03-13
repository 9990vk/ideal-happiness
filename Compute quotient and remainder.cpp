#include <iostream>
using namespace std;
    int main()
    {
    int quotient,remainder,dividend,divisor ;
    cout <<"Input the dividend :" ;
    cin >> dividend;
    cout <<"Input the divisor  :" ;
    cin >> divisor ;
    quotient=dividend/divisor;
    remainder=dividend-divisor*quotient;
    cout <<"The quotient of the division is : " << quotient <<"\n";
    cout << "The remainder of the division is : " << remainder ;
    return 0;
    }