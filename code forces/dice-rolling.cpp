#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int l,q,result;
    cin>>q;
    for(int i=0;i<q;i++)
    {
       cin>>l;
       result=floor(l/7);
       cout<<result+1<<endl;
    }

}

