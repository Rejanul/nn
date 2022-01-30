#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,c1=0,c2=0,c3=0,m,result=0,j=-1;
  string s;
  std::vector<int> v(3);
  cin>>n>>k>>s;
  for(int i=0;i<n;i++)
  {
    for( ;j<n-1;)
    {
      j++;
      if(s[j]=='a')
      c1++;
      else if(s[j]=='b')
      c2++;
      else
      c3++;
      v[0]=c1;
      v[1]=c2;
      v[2]=c3;
      sort(v.begin(),v.end());
      m=v[0]+v[1];
    //  cout<<i<<" "<<j<<" "<<c1<<" "<<c2<<" "<<c3<<endl;
      if(m>k)
      break;

      result=max(result,c1+c2+c3);

    }
    if(s[i]=='a')
    c1--;
    else if(s[i]=='b')
    c2--;
    else
    c3--;
  }
  cout<<result<<endl;
}
