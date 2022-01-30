#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0;
  string s;
  bool flag=true;
  int arra[100];
  char c;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>arra[j];
    }
  sort(arra,arra+n,greater<int>());
  for(int show=0;show<n;show++)
  {
      cout<<arra[show]<<" ";
  }
  cout<<endl;

  }

}
