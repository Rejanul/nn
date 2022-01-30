#include<iostream>
using namespace std;
int main()
{
    int b,k,arra,cb,ak,ck,zero=0,counter=0;
    cin>>b>>k;
    cb=b%2;
    for(int i=0;i<k;i++)
    {
        cin>>arra;
        if(i!=(k-1)&&(cb==1)){
        if(arra%2==0)
        {
            counter++;
        }
        }
    }
    k=k-(1+counter);

    ak=arra%2;
    ck=k%2;
    if(k==0)
    {
        if(ak==0)
        {
            cout<<"even"<<endl;
        }
        else
            cout<<"odd"<<endl;
    }
    else{
    if((cb==1)&&(ak==1)&&(k==1))
    {
        cout<<"even"<<endl;
    }
    if((cb==1)&&(ak==1)&&(k!=1))
    {
        cout<<"odd"<<endl;
    }
    if((cb==0)&&(ak==1))
    {
        cout<<"odd"<<endl;
    }
    if((cb==0)&&(ak==0))
    {
        cout<<"even"<<endl;
    }
    if((cb==1)&&(ak!=1)&&(k==1))
    {
        cout<<"odd"<<endl;
    }
    if((cb==1)&&(ak!=1)&&(k!=1))
    {
        cout<<"even"<<endl;
    }
    }
}
