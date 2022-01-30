#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    long long  n,sum=0;
    cin>>n;
    long long arra[n];
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    sort(arra,arra+n);
    for(int j=0;j<n;j++)
    {
        sum+=abs(arra[j]-(j+1));
    }
    cout<<sum<<endl;
}
