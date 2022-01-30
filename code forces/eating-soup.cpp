#include<iostream>
using namespace std;
int main()
{
    int n,m,d;
    cin>>n>>m;
    d=n/2;
    if (n==m)
    {
        cout<<0<<endl;
        return 0;
    }
    if(m==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(d>=m)
    {
        cout<<m<<endl;
    }
    else if(m>d)
    {
        cout<<n-m<<endl;
    }
}
