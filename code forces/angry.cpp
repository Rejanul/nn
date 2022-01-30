#include<bits/stdc++.h>
using namespace std;
int main()
{
    int team,member,counter=0,time=0;
    bool flug=false;
    string mem;
    cin>>team;
    for(int i=0;i<team;i++)
    {
        cin>>member;

        cin>>mem;

        for(int f=0;f<member;f++)
        {
            if((flug==true))
           {
               if((mem[f]!='A')){
               counter++;

                if(time<counter)
            {
                time=counter;
                //cout<<"1st"<<time<<"step"<<f<<endl;
            }
               }
           }
             if(mem[f]=='A')
        {
            counter=0;
            flug=true;
          // cout<<"from bool"<<f<<endl;

        }
        }
    }


        cout<<time<<endl;
        time=0;
        counter=0;
        flug=false;

    }


