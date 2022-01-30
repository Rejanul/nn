#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e6+10;
typedef pair<int ,int> pairs;
  std::vector<int> v[maxn];
  int cost=0,q1=0,q2=0;
  int  decrese(int p,int n);
  int  increase(int p,int n)
  {
    for(int i=p;i<n-1;i++)
    {
      if(v[i]<v[i+1])
      {
        cost++;
        if(cost>2)
        {
          cout<<"no"<<endl;
          return 0;
        }
        q1=i;
        decrese(i,n);
      }
    }
  }
  int decrese(int p,int n)
  {
    for(int i=p;i<n-1;i++)
    {
      if(v[i]>v[i+1])
      {
        cost++;
        if(cost>2)
        {
          cout<<"no"<<endl;
          return 0;
        }
        q2=i;
        decrese(i,n);
      }
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
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,i=0;
  string s;
  int arra[maxn];
  int arra1[maxn];
  std::map<int,int> map;
  bool flag=true;
  char c;
  cin>>t;

for(i=0;i<t;i++)
{
  cin>>arra[i];
  arra1[i]=arra[i];
}
sort(arra1,arra1+t);
for(int j=0;j<t;j++)
{
  map[arra1[j]]=j;
}
/*std::map<int, int>::iterator ite;
for(ite=map.begin();ite!=map.end();++ite)
{
  cout<<"\t"<<ite->first<<"\t"<<ite->second<<endl;
}*/
for(int g=0;g<t;g++)
{
  arra[g]=map[arra[g]];

}
 l=-1;
int r=-1;
for(i=0;i<t;i++)
{
  if(arra[i]!=i)
  {
    l=i;
    break;
  }
}
for(i=t-1;i>=0;i--)
{
  if(arra[i]!=i)
  {
    r=i;
    break;
  }
}
if(l==-1||r==-1)
{
  cout<<"yes"<<endl;
   cout<<1<<" "<<1<<endl;
}
else
{
  reverse(arra+l,arra+r+1);
  for(i=0;i<t;i++)
  {
    if(arra[i]!=i)
    {
      cout<<"no"<<endl;
      return 0;
    }
  }
  cout<<"yes"<<endl;
   cout<<l+1<<" "<<r+1<<endl;
}

/*  if(v[0]>v[1])
  {
      flag=false;
    increase(0,t);
  }
  else
   decrese(0,t);

   if(cost==0&&!flag)
   {
     cout<<"yes"<<endl;
     cout<<1<<" "<<1<<endl;
   }
   else if(cost==0&&flag)
   {
    cout<<"yes"<<endl;
     cout<<1<<" "<<t<<endl;
   }
   else if(cost==1&&!flag){
    cout<<"yes"<<endl;
     cout<<q1+1<<" "<<t<<endl;
   }
   else
    cout<<"no"<<endl;*/



}
