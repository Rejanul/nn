#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    long long int n,m,t;
    double div,counter=0,div1=0,counter1=0;
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

    for(double x=1; ;x++){
            if(div%pow(3,x)==0){
      div1=div/pow(3,x);
      counter++;
      }
      counter1=

    }
    cout<<counter<<endl;
}

