
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
   long long int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,m,p;
  string s;
  bool flag=true;
  char c;
  cin>>s;
  l=s.size();
  p=l;
  m=s[l-1]-'0';
  for(int i=0;i<l-1;i++)
  {
      n=s[i]-'0';
      if(n%2==0)
      {
          if(m<n)
          {
              p=i;
              b=1;
          }
          else
          {
          s[i]=s[l-1];
         s[l-1]=n+'0';
          cout<<s<<endl;
          flag=false;
          break;
      }
      }
  }
  if(flag&&b)
  {
      n=s[p]-'0';
      s[p]=s[l-1];
         s[l-1]=n+'0';
          cout<<s<<endl;


  }
  else if(flag&&!b)
  {
      cout<<-1<<endl;
  }




}
