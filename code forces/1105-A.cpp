#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0,avg;
    int arra[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arra[i];
        sum=sum+arra[i];
    }
    avg=sum/2;
}
