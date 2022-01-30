#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,odd,even;
  string s;
  int arra[100000000];
  int arra1[10000000];
  bool flag=true;
  char c;
  int arra[5000];
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>arra[i];
  }
  for( i=0;i<t;i++)
  {
    cin>>arra1[i];
  }
  for(i=0;i<(t-1);i++)
  {
      for(int j=i+1;j<t;j++)
      {
          if((arra[i]+arra[j])>(arra1[i]+arra1[j]))
          {
              cost++;
          }
      }
  }

}
