#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q,year,rmd,rmd1,p1,p2;

    cin>>n>>m;
    string s[n],t[m];


    for(int i=0;i<n;i++)
    {
        cin>>s[i];

    }
      for(int j=0;j<m;j++)
    {
        cin>>t[j];
    }
    cin>>q;
    for(int f=0;f<q;f++)
    {
        cin>>year;
        rmd=year%n;
        rmd1=year%m;

        if(rmd==0)
        {
            p1=n-1;
        }
        else
            p1=rmd-1;


        if(rmd1==0)
        {
            p2=m-1;
        }
        else
            p2=rmd1-1;

            cout<<s[p1]+t[p2]<<endl;

    }

}
