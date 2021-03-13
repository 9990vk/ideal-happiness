#include <iostream>
using namespace std;
    int main()
    {
    float total,avg,a,b,c,d;
    cout <<"Input 1st two numbers (separated by space) :" ;
    cin >> a >> b;
    cout <<"Input last two numbers (separated by space) :" ;
    cin >> c >> d;
    total=a+b+c+d;
    avg=total/4;
    cout <<"The total of four numbers is :  " << total <<"\n";
    cout << "TThe average of four numbers is : " << avg ;
    return 0;
    }