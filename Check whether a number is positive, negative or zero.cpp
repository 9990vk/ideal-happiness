#include <iostream>
using namespace std;

int main() {
    int a = 0;
  cout<< "Input the number : ";
	cin >> a;
  if (a > 0)
  {
    cout << "The entered number is positive";
  }
  else if (a < 0)
  {
    cout << "The entered number is negative";
  } 
  else 
  {
    cout << "zero";
  }
  return 0;
}