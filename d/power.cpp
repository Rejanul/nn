#include <bits/stdc++.h>
using namespace std;

int main()
{
 char o[33],h[33];
int a=0,v=17,v1=7;
//cin>>a;
//itoa(a,c,2);
//cout<<c<<endl;
for(int i=0;i<39;i++)
{
    cout<<"-";
}
cout<<endl;
//cout<<"|  decimal  |  octal  |  Hexadecimal  |"<<endl;
for(int i=0;i<39;i++)
{
    if(i==0||i==12||i==22||i==38) cout<<"|";
    else if(i==3) {
            cout<<"decimal";
            i=9;
    }
    else if(i==15) {
            i=19;
            cout<<"octal";}
    else if(i==25) {
        i=35;
        cout<<"Hexadecimal";}
    else if(i==30) {cout<<h;}
    else cout<<" ";

}
cout<<endl;
for(int i=0;i<39;i++)
{
    cout<<"-";
}
cout<<endl;
for(int j=0;j<16;j++){
        //itoa(a,o,8);
       //  itoa(a,h,16);
     //  v=17;
       snprintf(o, sizeof(o), "%o", a);
       snprintf(h, sizeof(h), "%X", a);
for(int i=0;i<39;i++)
{
    if(a==8) v=16;
    if(a==10) v1=6;
    if(i==0||i==12||i==22||i==38) cout<<"|";
    else if(i==v1) {if(a>9){i++;} cout<<a;}
    else if(i==v) {if(a>7){i++;}cout<<o;}
    else if(i==30) {cout<<h;}
    else cout<<" ";

}
cout<<endl;
a++;
}
for(int i=0;i<39;i++)
{
    cout<<"-";
}
cout<<endl;
 return 0;


}
