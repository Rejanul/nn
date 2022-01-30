#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,sum=0,c;
  cin>>n;
for(int i=0;i<n;i++)
{
  cin>>c;
  sum+=c;
}
if(n>2&&(sum==(2*n-2)))
{
  cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
}
