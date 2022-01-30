#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
typedef pair<int ,int> pairs;
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
  int arra[maxn];
  bool flag=true;
  char c;
  cin>>t>>x;

for(int i=0;i<t;i++)
{
    cin>>arra[i];
}

for(int j=0;j<t;j++)
{
    for(int f=l;f<t;f++)
    {   l=f;
        cost+=arra[f];

        if(cost>x)
        {
            cost-=arra[f];
            break;
        }
       value++;
        if(value>weight)
        {
            weight=value;
        }
      //  cout<<l<<"cost= "<<cost<<"value = "<<value<<"weight = "<<weight<<endl;
    }
    cost-=arra[j];
    value--;
  //  cout<<"out = "<<j<<"cost= "<<cost<<"value = "<<value<<"weight = "<<weight<<endl;
    if(l==t-1)
    {
        break;
    }
}
cout<<weight<<endl;



}
