#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long pos,mini1,pos1,mini2;
    int t,a,b,r,ab,p,ans,n,m;
    int fridge[1000],fridge2[1000];
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int counter=0,mini=0;

        cin>>n>>m;

        for(int j=0;j<n;j++)
        {
            cin>>fridge[j];
            mini=mini+fridge[j];
        }
        mini=mini*2;
        if(n<=2||m<n)
        {
            cout<<-1<<endl;

        }
        else{

        int extra=m-n;
       pos = min_element(fridge,fridge+n)-fridge;
        mini1 = fridge[pos];
        fridge[pos]=1000000;
         pos1 = min_element(fridge,fridge+n)-fridge;
         mini2= fridge[pos1];
       mini=mini+(mini1+mini2)*extra;
       cout<<mini<<endl;
       mini=0;
        for(int k=0;k<(n-1);k++)
        {
            cout<<k+1<<" "<<k+2<<endl;

        }
            cout<<1<<" "<<(n)<<endl;

        for(int g=0;g<extra;g++)
        {
            cout<<pos+1<<" "<<pos1+1<<endl;
        }
        }
    }
}

