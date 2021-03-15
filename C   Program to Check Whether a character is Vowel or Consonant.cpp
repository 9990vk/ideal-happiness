// C++ Program to Check Whether a character is Vowel or Consonant.
#include<iostream>
using namespace std;
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel ;
     cout << "Enter a alphabet : " ;
     cin >> c;
     
     isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
     isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
     
     if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}