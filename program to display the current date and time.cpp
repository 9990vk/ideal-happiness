#include <iostream>
#include <ctime>

using namespace std;

int main() {
   int seconds,minutes,hours,day_of_month,month_of_year,year,weekday,day_of_year,daylight_savings;
 //  char current_Date;
 //  char current_Time;
seconds = 57;
minutes = 33;
hours = 12;
day_of_month = 6;
month_of_year = 7;
year = 2017;
weekday = 4;
day_of_year = 186;
daylight_savings = 0;
//current_Date= 6/7/2017;
//current_Time= 12:33:57;

    cout << "seconds = " << seconds <<"\n";
    cout << "minutes =" << minutes <<"\n"; 
    cout << "hours= " << hours <<"\n";
    cout << "day of month = " << day_of_month  <<"\n";
    cout << "month of year =" << month_of_year<<"\n" ;
    cout << "year= " << year <<"\n";
    cout << "weekday= " << weekday<<"\n" ;
    cout << "day of year= " << day_of_year <<"\n";
    cout << "daylight savings= " << daylight_savings <<"\n";
 //   cout << "Current Date =" << current_Date <<"\n";
 //   cout << "Current Time=  " << current_Time <<"\n";

  
  return 0;
}