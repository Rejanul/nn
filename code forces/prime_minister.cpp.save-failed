#include<iostream>
using namespace std;
int main()
{
    int party,seat=0,j=0,seat1=0;
    int seats[101],valid[100];
    cin>>party;
    for(int i=0;i<party;i++)
    {
        cin>>seats[i];
        seat=seat+seats[i];
        if(i>0&&(seats[i]*2)<=seats[0])
        {
            valid[j]=i;
            j++;
        }
    }
    if(seats[0]>(seat/2))
    {
        cout<<1<<endl;
        cout<<1<<endl;
    }
    else
    {
        for(int k=0;k<j;k++)
        {
            seat1=seat1+seats[valid[k]];
        }
        seat1=seat1+seats[0];
        if((seat1*2)>seat)
        {
            cout<<j+1<<endl;
            cout<<1<<" ";
            for(int f=0;f<j;f++)
            {
               cout<<valid[f]+1<<" ";
            }
            cout<<endl;
        }
        else
            cout<<0<<endl;
    }


}
