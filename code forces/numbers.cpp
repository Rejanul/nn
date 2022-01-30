#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
typedef pair<int ,int> pairs;
  int arra[maxn];
void read(int n)
{
  for (int i=0;i<n;i++)
  {
    cin>>arra[i];
  }
}
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
    int n,weight=0,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0;
  string s;
  bool flag=true;
  char c;
  cin>>a>>b;
  if(a>b)
  {
      swap(a,b);
  }

for(int i=5;i<=(a+b);i+=5)
{
    if(i<=a&&i<=b)
    {
        cost+=(i-1);
    }
    else if(i>a&&i<=b)
    {
        cost+=a;
    }
    else
    {
        value=i-b;
        cost+=(a-value+1);
    }
}

cout<<cost<<endl;





}
