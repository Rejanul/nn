#include<iostream>
using namespace std;
int main()
{
    int h,w,h1,h2,w1,w2;
    cin>>w>>h;
    cin>>w1>>h1;
    cin>>w2>>h2;
    int weight=w;
    for(int i=h;i>=0;i--)
    {
        weight=weight+i;
        if(i==h1)
        {
            weight=weight-w1;

        }
        if(i==h2)
        {
            weight=weight-w2;

        }
        //weight=weight+i;
        if(weight<=0)
        {
            weight=0;
        }


}
    cout<<weight<<endl;;
}
