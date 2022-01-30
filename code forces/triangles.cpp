#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin>>x;
  int arra[x];
  for(int i=0;i<x;i++)
  {
    cin>>arra[i];
  }
  sort(arra,arra+x,greater<int>());
  for(int j=0;j<(x-2);j++){
  if(arra[j]<(arra[j+1]+arra[j+2]))
  {
    cout<<"YES"<<endl;
    return 0;
  }
}
   cout<<"NO"<<endl;


    }
