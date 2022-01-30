#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll  maxn = 20000000000;
typedef pair<int ,int> pairs;
/*int gcd(int a,int b)
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
}*/
int main()
{
    ll n,weight=0,value=maxn,a=0,b,t,x,y,w,l=0,trump,cost=1,c,d,k,cost1=0,m;
    int ch;
    bool ci[10];
  string s;
  int arra[500];
 // vector<ll> arra[maxn];
  bool flag=true;
//  char c;
 cin>>t;
for(int f=0;f<t;f++)
{
    cin>>arra[f];
   // arra[f].push_back(x);
}

sort(arra,arra+t);
//cout<<arra[1]<< endl;
//cout<<arra[1]-arra[0]<<endl;
//x=arra[1]-arra[0];
//cout<<x<<endl;
for(int i=0;i<t-1;i++)
{
    if((arra[i+1]-arra[i])<value)
    {
        value=arra[i+1]-arra[i];
        cost=1;

    }
    else if( (arra[i+1]-arra[i])==value)
    {
        cost++;
    }
}
cout<<value<<" "<<cost<<endl;



}
