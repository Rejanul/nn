#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
typedef pair<int ,int> pairs;
ll d,x,y;
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
ll exponential(ll b,ll p,ll m)
{
    if(p==0)
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
    }*/
    return extendedEuclid(A,B);
   // return exponential(b,m-2,m);
}
int main()
{
    ll n,weight=0,value=0,a=0,base,t,x=0,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m,r,power,modu;
    int ch;
    bool ci[10];
  string s;
  ll arra[maxn];
  bool flag=true;
//  char c;
 //cin>>t;
for(int i=0;i<1;i++)
{
   cin>>base>>power>>c>>modu;
  /* base%=modu;
   power%=modu;
   c%=modu;*/
 //  cout<<(exponential(base,power,modu)+modu)%modu;
  // cout<<(((exponential(base,power,modu)))*modulo_inverse(c,modu))%modu<<endl;
  cost=(exponential(base,power,modu)+modu)%modu;
  cost1=(modulo_inverse(modu,c)+modu)%modu;
 // cout<<cost<<"inverse ="<<cost1<<endl;
  //cout<<(exponential(base,power,modu)*modulo_inverse(c,modu))%modu<<endl;
  cout<<(cost*cost1)%modu<<endl;

}





}
