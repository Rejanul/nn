#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,s,c,t,result=0,q,p,d;
    bool fluge =false;
    int arra[100000];
    cin>>t;
   for(int i=0;i<t;i++)
   {
      cin>>n>>d;
      for(int j=0;j<n;j++)
      {
          s=j+ceil(d/((1+j)*1.00));
          if(s<=n)
          {
              cout<<"YES"<<endl;

              fluge = true;
              break;
          }
      }
      if(fluge == false)
      {
          cout<<"NO"<<endl;

      }
      fluge = false;


   }

    }


