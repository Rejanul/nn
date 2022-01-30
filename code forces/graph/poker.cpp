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
  cin>>arra[i];
  while((arra[i]%2)==0){arra[i]/=2;}
  while(arra[i]%3==0){arra[i]/=3;}
}
for(int j=1;j<t;j++)
{
  if(arra[j]!=arra[0])
  {
    cout<<"NO"<<endl;
    return 0;
  }
}
cout<<"YES"<<endl;




}
