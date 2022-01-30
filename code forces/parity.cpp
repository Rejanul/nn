#include<iostream>
using namespace std;
int main()
{
    int b,k,arra,c=0;
    cin>>b>>k;
    for(int i=0;i<k;i++)
    {
        cin>>arra;
        if(i==(k-1))
        {
            c=c+arra;
        }
        else
        c=c+b*arra;
    }
    if((c%2)==0)
    {
        cout<<"even"<<endl;
    }
    else
        cout<<"odd"<<endl;
}
