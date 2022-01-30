#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    long long max_array[100004];
    long long array[100004];
    int test,n;
    cin>>test;
    while(test--){
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    memset(max_array,0,sizeof(max_array));
    max_array[0]=array[0];
    max_array[1]=max(array[1],array[0]);
    for(int j=0;j<n-2;j++)
    {
        max_array[j+2]=max(max_array[j]+array[j+2],max_array[j+2]);
    }


    }

}