#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int cheack(string s,int l,int n)
{
    int arra[10]={0};
    char m=n+'0';
    //cout<<"m= "<<m<<endl;
    for(int k=0;k<l;k++)
    {
        if(s[k]<=m)
        {
            int g=s[k]-'0';
            arra[g]=1;
            //cout<<"arra[g] ="<<k<<endl;
        }

    }
    for(int p=0;p<=n;p++)
    {
        if(arra[p]!=1){
           // cout<<p<<endl;
            return 2;}
    }
    return 1;
}
int main()
{
    double n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0;
  string s;

  bool flag=true;
  char c;
  cin>>a>>b;
  int red=ceil((a*2)/b*1.00);
  int blue=ceil((a*5)/b*1.00);
  int green=ceil((a*8)/b*1.00);

cout<<red+green+blue<<endl;




}
