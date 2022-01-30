#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
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
    ll n,weight=0,value=0,a=0,b,t,x,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m;
    char ch[5]={'a','e','i','o','u'};
    bool ci[10];
  string s;
  int arra[5];
  bool flag=true;
//  char c;
 cin>>t;

for(int i=0;i<t;i++)
{
    cin>>a>>b;
    cost=(a-1)*b+(b-1)*a;
    if(cost>(a*b))
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}







}
