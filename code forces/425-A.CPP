#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,sum1,sum,j,sum2=0,c1=0,c2=0;
    int arra[200];
    cin>>n>>k;
    for(int j=0;j<n;j++)
    {
        cin>>arra[j];
    }
    sort(arra,arra+n);
    sum=arra[0];
    if(k>=n)
    {
         for(int i=1;i<n;i++)
    {
        sum1=sum;
        sum=sum+arra[i];
        if(sum1>sum)
        {
            sum=sum1;
        }
    }
    c1++;
    }
    else{
    for(int i=k;i<n;i++)
    {
        sum1=sum2;
        sum2=sum2+arra[i];
        //if(sum1>sum)
        //{
          //  sum=sum1;
        //}

    }
    c2++;}
    if(c1==1){cout<<sum<<endl;}
     if(c2==1){cout<<sum2<<endl;}
}
