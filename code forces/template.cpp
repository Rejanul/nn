#include<bits/stdc++.h>
using namespace std;

//1286 A garland unsolved
int main()
{
    int n,odd=0,even=0,complexity=0,p=0,q=1;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
      if(v[i]%2==1)
      odd++;

      else if((v[i]%2==0)&&v[i]!=0)
       even++;

    }

    if(odd==0 && even==0)
    {
      cout<<1<<endl;
      return 0;
    }
    for(int j=1;j<n;j++)
    {


    }

 }
