#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long m,n,d,r,t;
   cin>>n>>m;
   if(n>m)
   {
       swap(n,m);
   }
   d=m/5;
   r=m%5;
   t=d*n+(n+r-4);
   cout<<t<<endl;
}
