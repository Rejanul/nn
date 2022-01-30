#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum1=0,sum2=0,r;
    cin>>n;
    int data[n];
    int weight[n];
     for(int j=0;j<n;j++)
    {
       cin>>data[j];
    }
     for(int k=0;k<n;k++)
    {
       cin>>weight[k];
    }
    for(int i=0;i<n;i++)
    {
        data[i]=weight[i]*data[i];
    }
    sum1=double(accumulate(data,data+n,sum1));
    sum2=double(accumulate(weight,weight+n,sum2));
    r = sum1/sum2*1.00;

    cout<<fixed<<setprecision(1)<<r<<endl;

}