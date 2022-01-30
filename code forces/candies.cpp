#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int q,c1,c2,c3,t;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>c1>>c2>>c3;
        t=floor((c1+c2+c3)/2);
        cout<<t<<endl;
    }
}
