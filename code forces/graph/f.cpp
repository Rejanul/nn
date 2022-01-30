#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
typedef pair<int ,int> pairs;

  int arra[maxn];
  std::vector<int> nodes[maxn];
  std::vector<int> values[maxn];
  std::vector<pairs> v;
  std::vector<int> v2;
  std::map<int,int> map;
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
    int n,weight=0,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,m,k,i;
  string s;
  bool flag=true;
  char c;
  cin>>n>>m>>k;
for( i=0;i<n;i++)
{
  cin>>arra[i];
}
for(i=0;i<m;i++)
{
  cin>>x>>y;
  nodes[x].push_back(y);
  nodes[y].push_back(x);
}
for(int j=0;j<n;j++)
{
  for(int f=0;f<nodes[j+1].size();f++)
  {
    v.push_back(make_pair(arra[nodes[j+1][f]-1],nodes[j+1][f]));
  }
  sort(v.begin(),v.end(),greater<>());
  cout<<"for j= "<<j<<endl;
  for(int ve=0;ve<nodes[j+1 ].size();ve++)
  {

    cout<<v[ve].second<<" ";
    cout<<v[ve].first<<endl;

  }
  w=k;

  v2.push_back(v[k-1].second);
  while(v[k-1].first==v[w].first)
  {
    a=v[w].second;
    v2.push_back(a);
    w++;
  }
  w=k-2;
  while(v[k-1].first==v[w].first)
  {
    cost++;
    a=v[w].second;
    v2.push_back(a);
    w--;
  }
  for(i=0;i<v2.size();i++)
  {
    cout<<v2[i];
  }
  cout<<endl;
  sort(v2.begin(),v2.end());
  for(i=0;i<v2.size();i++)
  {
    cout<<v2[i];
  }
  cout<<v2[cost]<<endl;
  v.clear();
  v2.clear();
  cost=0;
}


}
