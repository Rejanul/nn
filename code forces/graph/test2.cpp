#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e6+10;
std::vector<int> vc[maxn];

bool mark[maxn];
bool mark2[maxn];
void output(int node)
{
      mark2[node]=1;
      cout<<node<<" ,";
  for(int X:vc[node]){
    if(!mark2[X])
    output(X);
  }
  }


void dfs(int x)
{
  mark[x]=1;
  for(int f:vc[x])
  {
    if(!mark[f])
    {
      dfs(f);
    }
  }
}
 int main() {
int n,m,k,u,v,count=0;
cin>>n>>m>>k;
for(int i=0;i<m;i++)
{
  cin>>u>>v,u--,v--;
  vc[u].push_back(v);
  vc[v].push_back(u);

}
for(int i=0;i<n;i++)
{
  if(!mark[i])
{
  dfs(i);
  count++;
}
}
if(count>k)
{cout<<-1<<endl;}
else
cout<<m-n+k<<endl;


}
