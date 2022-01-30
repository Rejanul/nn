#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll  maxn = 10e9+7;
typedef pair<int ,int> pairs;

ll exponential(ll b,ll p,ll m)
{
    if(p==0)c
    {
        return 1;
    }
    else if(p%2==0)
    {
        p/=2;
       return exponential( (b*b)%m,p,m);
    }
    else
    {

        return (b*exponential((b*b)%m,(p-1)/2,m))%m;
    }

}
ll factorial(ll n,ll m)
{
  ll w=1;
  for(int i=n+m;i>=n;i--)
  {
    w=(w%maxn*i%maxn)%maxn;
  }
  return w;
}
int main()
{
    ll n,weight=0,value=0,a=maxn,base,t,x=0,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m,r,power,modu;

//  char c;
 cin>>t;

for(int i=0;i<t;i++)
{
cin>>n>>m;
m--;
if(n<m)
{
  swap(n,m);
}

cost=factorial(n,m);

}

}




}
