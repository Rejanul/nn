#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
typedef pair<int ,int> pairs;
ll int result=1;
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
 int factorial( int n)
{

  result=n*factorial(n-1);
  if(n==1)
  {
    return result;
  }
}
int main()
{
    int n,weight=0,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0;
  string s;
  int arra[maxn];
  bool flag=true;
  char c;
  cin>>t;

for(int i=0;i<t;i++)
{
    cin>>value;
    cout<<factorial(value);
    result=1;

}



}
