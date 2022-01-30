#include<bits/stdc++.h>
using namespace std;
int binary[1000000];

int dtb(int dnum)
{
    int i=0;
    while(dnum>0)
    {
        binary[i]=dnum%2;
        dnum/=2;
        i++;
    }
    return i;
}

long long int btd(int bnum)
{
    int remainder,i=0;
    long long int decimal=0;
    while(bnum>0){
    remainder=bnum%10;
    bnum/=10;
    decimal+=remainder*(pow(2,i));
    i++;
    }
    return decimal;
}
int main()
{
    int dnum,bnum,i;
    cout<<"Enter A decimal number"<<endl;
    cin>>dnum;
    cout<<"binary form"<<endl;
    i=dtb(dnum);
    for(int j=i-1;j>=0;j--)
    {
        cout<<binary[j];
    }
    cout<<endl;
    cout<<"enter a binary no";
    cin>>bnum;
    cout<<"binary no is "<<btd(bnum)<<endl;


}
