#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,energy=0;
  string s;
  bool flag=true;
  char c;
  cin>>t;
  int arra[t+1];
  arra[0]=0;
  for(int i=1;i<=t;i++)
  {

    cin>>arra[i];
  }
  arra[0]=0;
  cost=max_element(arra,arra+(t+1))-arra;
//  cost=arra[1];
//
//  arra[0]=arra[1];
//  for(int j=0;j<t;j++)
//  {
//      b=arra[j]-arra[j+1];
//      energy+=b;
//      if(energy<0)
//      {
//          cost+=abs(b);
//          energy=0;
//
//        }
//  }
 cout<<arra[cost]<<endl;
}
