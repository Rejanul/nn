#include<iostream>
using namespace std;
int main()
{
    int hours,rest,counter=0,test=0,result=0,result1=0,test1=0,zero=0,test3=0;
    int hour[200000];
    cin>>hours;
    for(int i=0;i<hours;i++)
    {
        cin>>hour[i];
    }

    for(int j=0;j<hours;j++)
    {
        if(hour[j]==1)
        {
            counter++;
            test=1;
        }
        if(counter==hours)
        {
            cout<<hours*2<<endl;
            return 0;
        }
        if((test==1)&&(hour[j]==0))
        {
            if((hour[0]==1)&&(hour[hours-1]==1)&&(test1==0))
            {
                for(int k=(hours-1);k>=0;k--)
                {
                    if(hour[k]==0)
                    {
                        break;
                    }
                    zero++;

                }
                counter=counter+zero;
                test1=1;
            }
            if(counter>result)
            {
                result=counter;
            }
            counter=0;
            test=0;
            test3=1;
        }
    }
    if(test3==1)
    {
    cout<<result<<endl;}
    if(test3==0)
    {
        if(result<counter)
        cout<<counter<<endl;
        else
            cout<<result<<endl


    }
}
