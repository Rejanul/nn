#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,sum=0,dif;
    int ara[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(int j=0;j<n;j+=2)
    {
        dif=ara[j+1]-ara[j];
        sum=sum+dif;
    }
    cout<<sum<<endl;
}
