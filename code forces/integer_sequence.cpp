#include<iostream>
using namespace std;
int main()
{
    int value,raniad,ind;
    cin>>value;
    raniad=value%4;
    if(raniad==3)
    {
        ind=0;
    }
    else if(raniad==1||raniad==2)
    {
        ind=1;
    }
    cout<<ind;
    return 0;
}
