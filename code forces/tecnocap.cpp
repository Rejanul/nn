#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxi(int first[],int second[])
{

}
int main()
{
    int t;

    cin>>t;
    while(t>0)
    {
        int test=-1;
        int n,index;
        cin>>n;
        int first[n],second[n];
        for(int i=0;i<n;i++)
        {
            cin>>first[i]>>second[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                int mnum=abs(first[j]-second[j]);
                if(mnum>test)
                {
                    index=j;
                    test=mnum;
                }

            }
            int one=max_element(first,first+n)-first;
            int  two=min_element(second,second+n)-second;
            int sum=abs(first[one]-second[two]);
            cout<<sum<<endl;
        }
        t--;
    }
}
