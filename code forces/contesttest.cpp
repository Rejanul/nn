#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,r,ab,p,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        ab=abs(a-b);

        p=ab/5;
        r=ab%5;
        if(r==2||r==1)
        {
            ans=p+1;
            cout<<ans<<endl;
        }
        else if(r==3||r==4)
        {
            ans=p+2;
            cout<<ans<<endl;
        }
        else if(r==0)
        {
            cout<<p<<endl;
        }

    }
}
