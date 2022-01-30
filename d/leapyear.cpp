#include <iostream>
using namespace std;

int main() {
    int year,remainder;
   cout<<"enter a year"<<endl;
   cin>>year;
   remainder=year%4;//as leap year arrive every 4th year
   if(remainder==0)
   {
       cout<<"this year is leap year"<<endl;
   }
   else
    cout<<"not leap year"<<endl;
    return 0;
}

