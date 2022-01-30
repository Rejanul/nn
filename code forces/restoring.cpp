#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int c=-1,t;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<4;j++)
    {
        if(a[j]>c)
        {
            c=a[j];
            t=j;
        }
    }

    for(int k=0;k<4;k++)
    {
        if(k==t){
            continue;}
            cout<<c-a[k]<<" ";
    }
    cout<<endl;

}
