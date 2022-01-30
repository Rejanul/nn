#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,n,s,r,d,m;
    int arra[1000][1000];
    int arra1[1000][1000];
     vector< pair <int,int> > vect;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a>>b;
           vect.push_back( make_pair(a,b) );

        }

        sort(vect.begin(), vect.end());
        for(int f=0;f<n;f++)
        {
            if(vect[f].first!=vect[f-1].first)
            {
                d = vect[f].first-vect[f-1].first;
                for(int l=0;l<d;l++)
                {
                    cout<<"R";
                }
                for(int l=0;l<vect[f].second;l++)
                {
                    cout<<"U";
                }
            }
            else
            {
                int d1 = vect[f].second-vect[f-1].second;
                if(d1>0)
                {
                     for(int l=0;l<d1;l++)
                {
                    cout<<"U";
                }
                }
            }
        }
    }


}

