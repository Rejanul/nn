#include<iostream>
using namespace std;
int main()
{
  int x,sum=0,d=0,sum1=0,y=0,counter=0;
  cin>>x;
      while(1)
      {
       d=19+9*y;
       sum =d;
        y++;
        while(sum!=0){
        sum1=sum1+(sum%10);
        sum=sum/10;
        }
      if(sum1==10)
      {
        counter++;
        sum1 =0;
      }
      if(counter==x)
      {
        cout<<d<<endl;
        return 0;
      }
      }
    }
