#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,s=0,c=0,t,result=0,q,p,one=0,zero=0;
    int arra[100000];
    cin>>t;

   for(int i=0;i<t;i++)
   {
       cin>>arra[i];
       if(arra[i]==0)
       {
           zero++;
       }
       else
        one++;

   }
   s=one;
   for(int j=0;j<t;j++)
   {
       for(int k=j;k<t;k++)
       {
           if(arra[k]==0)
           {
               s=s+1;
               if(s>c)
               {
               c=s;
               }
           }
           else{
            s=s-1;
             if(s>c)
             {
                 c=s;
             }
           }
       }
       s=one;
   }


    cout<<c<<endl;

    }


