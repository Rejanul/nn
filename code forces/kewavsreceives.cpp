#include<iostream>
using namespace std;
int main()
{
    string num;
    string part1,part2;
    int length,p1=1,zero=0,one=0,zero1=0,one1=0;
    cin>>length;
    cin>>num;
    if(length==1)
    {
        cout<<1<<endl;
        cout<<num<<endl;
        return 0;
    }
    while(1){
    for(int i=0;i<p1;i++)
    {
        part1[i]=num[i];
        if(part1[i]=='0')
        {
            zero++;
        }
        else
            one++;
    }
    for(int j=p1;j<length;j++)
    {
        part2[j]=num[j];
       // cout<<"checking first part"<<part2[j]<<endl;
        if(part2[j]=='0')
        {
            zero1++;
        }
        else
            one1++;
    }
    //cout<<"zero="<<zero<<"  "<<"one="<<one<<endl;
   // cout<<"zero1="<<zero1<<"  "<<one1;
    if((zero!=one)&&(zero1!=one1))
    {
        cout<<2<<endl;
        for(int k=0;k<p1;k++)
        {
            cout<<part1[k];
        }
        cout<<" ";
         for(int l=p1;l<length;l++)
        {
            cout<<part2[l];
        }
        break;
    }
    else
        p1++;
        zero=0;
        zero1=0;
        one=0;
        one1=0;
        }
}
