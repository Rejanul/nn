#include<iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long int digit,k,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k>>x;
    digit=x+(k-1)*9;
    cout<<digit<<endl;
    }


}
