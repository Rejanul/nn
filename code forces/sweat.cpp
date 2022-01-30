#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,s,c,t,result=0,q,p;
    int arra[100000];
   cin>>t;
   for(int i=0;i<t;i++)
   {
       for(int j=0;j<3;j++)
       {
           cin>>arra[j];
       }
        sort(arra,arra+3);
        if(arra[2]>arra[1]+arra[0])
        {
            cout<<(arra[1]+arra[0])<<endl;
        }
        else
        {
            cout<<(arra[0]+arra[1]+arra[2])/2<<endl;
        }

   }






    }


