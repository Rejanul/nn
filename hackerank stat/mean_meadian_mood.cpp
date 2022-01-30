#include <bits/stdc++.h>
using namespace std;


int main() {
    double mean,meadian,mood,m,sum=0;
    int n,data1,maxn=-1,num;
    cin>>n;
    int data[n];
    for(int i=0;i<n;i++)
    {
        cin >>data[i];
    }  
    sort(data,data+n);
    sum = double(accumulate(data,data+n,sum));
    //cout<<sum<<endl;
    mean = sum/n*1.00;
    
    // int duplicate[m]=0;
    // for(int j=0;j<t;j++)
    // {
    //     duplicate[vect[j]]++;
    // }


    if(int(n)%2==1)
    {
        meadian = data[n/2];
    }
    else {
    meadian = (data[n/2]+data[(n/2)-1])/2.00;
    }
    for(int j=0;j<n;j++)
    {
        num = count(data+j,data+n,data[j]);
        if(num>maxn)
        {
            maxn=num;
            data1 = data[j];
        }
    }
    
    
    cout<<fixed;
    cout<<setprecision(1)<<mean<<endl;
    cout<<setprecision(1)<<meadian<<endl;
    cout<<data1<<endl;
    
    return 0;
}
