#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,x,y;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>x>>y;
        if(x==y||y<x)
        {
            cout<<"yes"<<endl;
        }
        else if(x==1&&y>x)
        {
            cout<<"no"<<endl;
        }

        else if(x==2&&y==3){
            cout<<"yes"<<endl;}
        else if(x==2||x==3)
        {
            cout<<"no"<<endl;
        }
        else if(y>x)
        {
            cout<<"yes"<<endl;
        }

    }
}
