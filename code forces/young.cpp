#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll  maxn = 10e9+10;
const int maxm = 2e5+10;
typedef pair<int ,int> pairs;


int main()
{
    int n,weight=0,value=0,a,base,t,x=0,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m,r,power,modu,initial=0;
    int ch;
    bool ci[10];
  string s;
  //ll arra[1000];
  bool flag=true;
//  char c;
 cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    vector<int> v;
    cost=-1;
    cost1=0;
    r=0;
    for(int i=0;i<n;i++)
    {
      cin>>l;

      v.push_back(l);
    }
sort(v.begin(),v.end());
initial=v[0];
for(int j=0;j<v.size();j++)
{
  cost++;
  if((v[j]!=initial)||j==v.size()-1)
  {
    if((j==v.size()-1)&&v[j]==initial)
    {
      cost++;
    }
    cost1+=(cost+r)/initial;
    r=cost%initial;
    cost=-1;
    initial=v[j];

  }
}
cout<<cost1<<endl;
}




}
