#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int s=0,c,t,result=0,q,r;
    double p,n,m;
    int arra[100000];
   cin>>n>>m;
   p=ceil(n/m*1.00);
   cout<<p<<endl;
   r=240-m;
   for(int i=1;i<=n;i++)
   {
       s=s+5*i;
       if(s>r)
       {
           c=i-1;
           cout<<c<<endl;
           return 0;
       }
       if(s==r)
       {
           c=i;
           cout<<c<<endl;
           return 0;;
       }
   }
   cout<<n<<endl;
        return 0;



    }



