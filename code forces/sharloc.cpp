#include<bits/stdc++.h>
using namespace std;

int arra1[100010];
int main()
{
    long long int n,s,c,t,result=0,q,p;
    int arra[100000];
    cin>>t;
  for(int i=2;i<=t+1;i++)
  {
      for(int j=i*2;j<=t+1;j+=i)
      {
          if(!arra1[j])
          {
              arra1[j]=1;
          }
      }
  }
    if(t>2)
        cout<<"2\n";
    else
        cout<<"1\n";

    for(int k=2;k<=t+1;k++)
    {
        if(!arra1[k])
        {
            cout<<"1 ";
        }
        else
            cout<<"2 ";
    }

   }


