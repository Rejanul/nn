#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,s,c,t,result=0,q,p;
    int arra[100000];
    cin>>t;
    for(int i=0;i<t;i++){
   cin>>n>>c;
   q=n/c;
   p=c/2;
   s=n-q*c;
   if(s>=p)
   {
       cout<<(q*c)+p<<endl;
   }
   else{

    cout<<(q*c)+s<<endl;
   }

    }


    }



