#include<iostream>
using namespace std;
int main ()
{
    long long int n,m,t;
    int div,counter=0;
    cin>>n>>m;
    div=m/n;
    t=m%n;
    if(t!=0||n==0||m==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(m==n)
    {
        cout<<"0"<<endl;
        return 0;
    }
    while(div!=1)
    {
      if(div%2==0)
      {
          counter++;
          div=div/2;
      }
      else if(div%3==0)
      {
          counter++;
          div=div/3;
      }
     else  if(div%2!=0&&div%3!=0)
      {
          cout<<"-1"<<endl;
          return 0;
      }
    }
    cout<<counter<<endl;
}
