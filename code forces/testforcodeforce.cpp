#include<iostream>
using namespace std;
int main()
{
    int k,a,b,c,d,pen,pencil,t,n,one=0,s1=0,s2=0;
    bool test;
    string stair;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>stair;
        for(int j=0;j<n;j++)
        {
            if(stair[j]=='1')
            {
               if(s1==0)
               {
                   s1=j+1;
               }
               else
                s2=j+1;
            }
        }
        if(s1!=0&&s2==0)
        {
            s2=s1;
        }
        if(s1==0&&s2==0)
        {
            cout<<n<<endl;
            //cout<<"from 0"<<endl;
        }
        else if((n-s1+1)>s2)
        {
            cout<<(n-s1+1)*2<<endl;
           // cout<<"from 1"<<endl;
        }

        else
        cout<<(s2)*2<<endl;
        s1=0;
        s2=0;
       // if()
       //{
        //    cout<<pen<<" "<<pencil<<endl;
        //}
        //else
            //cout<<-1<<endl;
    }
}
