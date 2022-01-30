#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)


int main()
{
    long long int n,s,c,t,result=0,q,p,d,r;
    bool fluge =false;
    int arra[100000];
    cin>>t;
   forn(tt,t)
   {
      cin>>n;

     if(n<=20&&n>14)
     {
         cout<<"YES"<<endl;
     }
     else if(n<15)
     {
         cout<<"NO"<<endl;
     }
     else{
     r=n%14;
        if(r<=6&&r>0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
     }



   }

    }


