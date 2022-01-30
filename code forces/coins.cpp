#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,n,s,r,d,m;
    int arra[5];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arra[j];
        }
        cin>>n;
        s=max(arra[0],arra[1]);
        m=max(arra[2],s);
        d= (m-arra[0])+(m-arra[1])+(m-arra[2]);
        n-=d;
        if((n%3)==0&&n>=0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


}
