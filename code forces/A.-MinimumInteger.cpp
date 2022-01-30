#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int l,r,d,q,result,result1;
    cin>>q;
    for(int i=0;i<q;i++)
    {
       cin>>l;
       cin>>r;
       cin>>d;
       if(d<l)
       {
           cout<<d<<endl;
       }
       else
       {
           result=floor(r/d);
           result1=d*(result+1);
           cout<<result1<<endl;
       }
    }

}

