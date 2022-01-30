#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,k,arra[100000],lent[100000],length=1,lenth,f=0,tape=0;
    cin>>n>>m>>k;

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    for(int j=1;j<n;j++)
    {
        lent[j-1]=arra[j]-arra[j-1];

    }
    sort(lent,lent+(n-1));
    for(int g=0;g<(n-k);g++)
    {

       tape=tape+lent[g];
    }
    cout<<tape+k<<endl;


}
