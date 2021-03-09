#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    cout << "\n\n Formatting the output :\n";
   double pi = 3.14159265; 
   cout <<" The value of pi : " << pi << "\n";
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << "\n"; 
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< "\n"; 
   
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << "\n"; 
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< "\n"; 
   
   cout <<" The value of pi in scientific format is : " << pi << "\n";
   
   bool Status = false; 
   cout <<" Status in number : " << Status << "\n";  
   cout << boolalpha;     
   cout <<" Status in alphabet : " << Status << "\n";
   return 0;
}