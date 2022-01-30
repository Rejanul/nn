#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
  vector <int> graph[10];
void input(int n)
{
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
       graph[x].push_back(y);
    }
}
void output(int nodes)
{
    for(int i=0;i<nodes;i++)
    {
        cout<<"for  node:"<<i<<" ";
        for(int j=0;j<graph[i].size();j++)
        {
            if(j==graph[i].size()-1)
            {
                cout<<graph[i][j]<<endl;
            }
            else
                cout<<graph[i][j]<<"-->";
        }
        cout<<endl;
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
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,edges,nodes;
  string s;
  int arra[100];
  vector <int> graph[10];
  bool flag=true;
  char c;
  cin>>nodes>>edges;
  input(edges);
  output(nodes);





}
