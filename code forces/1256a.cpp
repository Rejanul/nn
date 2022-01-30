#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     long long  testcase,a,n,remender,quatent;
    long long b,s;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        cin>>a>>b>>n>>s;
        if((a*n)<=s)
        {

            if((s-(a*n))<=b)
            {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
        }
        else {
            quatent = floor(s/n*1.0);
            if((s-(quatent*n))<=b)
            {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;

        }
    }
}
