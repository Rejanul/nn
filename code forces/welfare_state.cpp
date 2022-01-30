#include<iostream>
using namespace std;
int main()
{
    int citizen,event,x,p,z;
    cin>>citizen;
    long int amount[citizen];

     for(int g=0;g<citizen;g++)
    {
        cin>>amount[g];
    }
    cin>>event;
    for(int i=0;i<event;i++)
    {
       // cout<<"loop"<<endl;
        cin>>x;
        if(x==1)
        {
            //cout<<"replace"<<endl;
            cin>>p>>z;
            amount[p-1]=z;
        }
        else if(x==2)
        {
            cin>>z;
            for(int j=0;j<citizen;j++)
            {
                if(amount[j]<z)
                {
                    amount[j]=z;
                }
            }
           // cout<<"donate"<<endl;
        }

    }
    for(int f=0;f<citizen;f++)
    {
        cout<<amount[f]<<" ";
    }
    cout<<endl;

}
