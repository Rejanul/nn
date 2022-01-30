#include<bits/stdc++.h>
using namespace std;
const int  maxn = 2e6+10;
int main()
{
  int n,k,c1=0,c2=0,c3=0,m,result=0,j=-1,count=0,t;
  string s;

  std::vector<int> v(3);
  cin>>t;
  for(int i=0;i<t;i++)
  {
    bool b[maxn]={0};
    cin>>n;
    for(int j=0;j<n;j++)
    {
      cin>>c1>>c2;
      if(b[c1]!=true)
      {
        b[c1]=true;
        count++;
      }
      if(b[c2]!=true)
      {
        b[c2]=true;
        count++;
      }
    }
    cout<<count<<endl;
    cout<<b[c1]<<endl;
    count=0;
  }

}
