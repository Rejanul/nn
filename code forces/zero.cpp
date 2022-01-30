#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,t,m=0,test;
    int num[100000];
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
        if(num[i]>=m)
        {
            m=num[i];
        }
    }
    cout<<m<<endl;
    test=sum-m;
    if(m>test)
    {
        cout<<"no"<<endl;
        return 0;
    }

    t=sum%2;
   if(t==0)
   {
       cout<<"yes"<<endl;
   }
   if(t==1)
   {
       cout<<"no"<<endl;
   }
}



