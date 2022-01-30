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
  cin>>t;

for(int i=0;i<t;i++)
{
  cin>>n;
  read(n);
  sort(arra,arra+n);
  if(n%2==0)
  value=n/2-1;

  else
  value=n/2;

cout<<arra[value]<<" ";
  for(int i=1;i<=(value);i++)
  {
    cout<<arra[value+i]<<" "<<arra[value-i]<<" ";
  }
  if(n%2==0)
  cout<<arra[n-1]<<" ";

  cout<<endl;
}





}
