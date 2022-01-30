#include<iostream>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;
    if((x>y)&&(y!=1))
    {
        cout<<"<"<<endl;
    }
    if((x>y)&&(y==1))
    {
        cout<<">"<<endl;
    }

     if(x<y)
    {
        cout<<">"<<endl;
    }
     if((x==y))
    {
        cout<<"="<<endl;
    }

}
