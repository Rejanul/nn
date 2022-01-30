#include<bits/stdc++.h>
using namespace std;
int digit(int x)
{
    int remender;
    remender=x%10;
    return remender;
}
int main()
{
    double n,disi1=-1,disi2=0,m,k,d=0,ave,counter=0,num,t;

    cin>>t;



    for(int j=0;j<t;j++)
    {
       cin>>n;
       d=360/(180-n);
       k=floor(d);
       if(k==d)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;


    }


}
