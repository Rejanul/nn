#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,t,t1,x;
    double arra[100],trd,nd,st,sum=0,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
sum=accumulate(arra,arra+n,sum);
double ave =double(sum/n);
sum = 0;
for(int j=0;j<n;j++)
{
    sum +=pow(arra[j]-ave,2);
}

r =double( sqrt(sum/n));
     
    
    cout<<fixed<<setprecision(1)<<r<<endl;
       
    return 0;
}

