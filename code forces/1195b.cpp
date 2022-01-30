#include<iostream>
using namespace std;
int main()
{
    int moves,remaining,eaten,inc=0,test;
    cin>>moves>>remaining;
    if(moves==1&&remaining==1)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(remaining==0)
    {
        for(int i=1;i<=moves;i++)
        {
            inc=inc+i;
            if(inc==(moves-i))
            {
                cout<<inc<<endl;
                return 0;
            }
        }
    }
    else if(moves==0)
    {
        cout<<0<<endl;
    }
    else
    for(int i=1;i<=moves;i++)
    {
        inc=inc+i;
        if(remaining<inc)
        {
            test=inc-remaining;
            if((moves-i)==test)
            {
                cout<<test<<endl;
                return 0;
            }
            else
                continue;
        }
    }
}
