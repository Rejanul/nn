#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,s=0,t,result=0,q,p,count=0;
    int c;
    bool flug=true;
    int arra[100000];
    std::vector<int> v;
    cin>>n>>t>>c;
    v.push_back(-1);
    for(int j=0;j<n;j++)
    {
      cin>>p;
      if(t<p)
      {
        v.push_back(j);
      }
    }
    v.push_back(n);
    for(int i=1;i<int(v.size());i++)
    {
      int dif = v[i]-v[i-1]-1;
      s+= max((dif-c+1),0);
    }
    cout<<s<<endl;
     return 0;
 }
