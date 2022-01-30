#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll  maxn = 10e9+10;
typedef pair<int ,int> pairs;
//ll d,x,y;
/*int prime(int num)
{
    if(num==2)
    {
        return 1;
    }
    if(num==1)
    {
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
   // cout<<num<<" ";
    return 1;
}*/
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
/*ll exponential(ll b,ll p,ll m)
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
ll extendedEuclid(ll A, ll B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        ll temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
    return y;
}
ll modulo_inverse(ll A,ll B )
{
   /* b%=m;
    for(ll i=1;i<m;i++)
    {
        if((b*i)%m==1)
        {
            return i;
        }
    }
    return extendedEuclid(A,B);
   // return exponential(b,m-2,m);
}*/
int main()
{
    ll n,weight=0,value=0,a=maxn,base,t,x=0,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m,r,power,modu;
    int ch;
    bool ci[10];
  string s;
  ll arra[1000];
  bool flag=true;
//  char c;
 cin>>t;
 a=maxn;
for(int i=0;i<t;i++)
{

   cin>>arra[i];
  cost=min(arra[i],a);
  a=cost;
 // cost=(exponential(base,power,modu)+modu)%modu;
 // cost1=(modulo_inverse(modu,c)+modu)%modu;
  //cout<<(cost*cost1)%modu<<endl;
}
//cout<<a<<endl;
for(int j=2;j<=a;j++)
{
    d=arra[0]%j;
    for(int g=0;g<t;g++)
    {
        if(d!=arra[g]%j)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<j<<" ";
    }
    flag=true;
}




}
