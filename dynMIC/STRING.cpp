#include<bits/stdc++.h>
using namespace std;
int num[10000060]={0};
int even(int n)
{
    if(n%2==0)
        return 1;

    return -1;
}
int main()
{
    string s;
    long long int l;
    cin>>s;
    l=s.length();
    //cout<<l;
    for(int i=l-1;i>=0;i--)
    {
        if(even(int(s[i]))==1)
        {
            num[i]=1+num[i+1];
        }
        else
            num[i]=num[i+1];
    }
    for(int j=0;j<l;j++)
    {
        cout<<num[j]<<" ";
    }
    cout<<endl;

}
