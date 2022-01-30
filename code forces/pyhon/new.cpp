#include<iostream>
using namespace std;
int maxx(int arra[],int i)
{
    //cout<<"from function i ="<<i<<endl;
    if(i<1)
    {
        return arra[0];
    }
    return max(arra[i],maxx(arra,(i-1)));
}
int main()
{
    int n,t,sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int data[200000]={0};
        sum=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int m=0;m<n;m++)
        {
            sum=0;
            for(int index = m; index<n;index+=a[index])
            {
                sum += a[index];
               // cout<<"m ="<<m<<"index ="<<index<<"  sum ="<<sum<<endl;
                if(data[index]<sum)
                {
                    data[index] = sum;
                   // cout<<"data changed :"<<data[index]<<endl;
                }
                else
                {
                   // cout<<"break"<<endl;
                    break;
                }
                
            }
        }

        sum = maxx(data,n);
        cout<<sum<<endl;

    }
}