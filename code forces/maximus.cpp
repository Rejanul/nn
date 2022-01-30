#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int gcd(int a,int b)
{
    while(a!=0&&b!=0)
    {
        if(a>b)
        {
            a%=b;
        }
        else
            b%=a;
    }
    return max(a,b);
}
int main()
{
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0;
  string s;
  int arra[100];
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>n;
      if(n==1)
      {
          cout<<-1<<endl;

      }
      else
      {
          cout<<2;
              for(int j=0;j<n-1;j++)
              {
                  cout<<3;
              }
              cout<<endl;


      }
  }
}
