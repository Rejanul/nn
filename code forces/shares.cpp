#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,r,t,mo,re;
    int b[30],s[30];
    cin>>n>>m>>r;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>s[j];
    }

    sort(b,b+n);
    sort(s,s+m);

    if(b[0]>=s[m-1])
       {
           cout<<r<<endl;

          return 0;
       }
    re=r/b[0];
    mo=r%b[0];
    cout<<mo+(re*s[m-1])<<endl;;
}
