#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,suger=0,day=1,sweat=0,sweat1;
    cin>>n>>m;
    int arra[n];
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    sort(arra,arra+n);
     for(int i=0;i<n;i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<endl;

    for(int j=0;j<n;j++)
    {
        sweat++;
        if(sweat%m==0)
        {
            day++;
        }

        if(sweat<=m)
        {
            suger=suger+arra[j];
            cout<<suger<<" ";

        }

        else if(sweat>m)
        {
            sweat1=sweat;
            int d=day;
            suger=0;
            for(int f=0;f<=j;f++)
            {
                suger=suger+d*arra[f];
                cout<<suger<<"day"<<d<<endl;
                sweat1--;

        if(sweat1%m==0)
        {
            d--;
        }
            }
            cout<<suger<<" ";

        }
    }
}
