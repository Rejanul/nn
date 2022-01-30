#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
typedef pair<int ,int> pairs;
/*int gcd(int a,int b)
{
    while(a!=0&&b!=0)
    {
        if(a>b)
        {
            a%=b;
        }
        else
            b%=a;
    }
    return max(a,b);
}*/
int main()
{
    double n,weight=0,value=0,a=0,b,t,x,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m;
    int ch;
    bool ci[10];
  string s;
  int arra[maxn];
  bool flag=true;
//  char c;
 cin>>t;
for(int i=0;i<t;i++)
{
    for(int j=0;j<10;j++)
    {
        cin>>x;
        if(x==1)
        {
            ci[j]=true;
        }
        else
            ci[j]=false;
    }
    if(ci[0]&&((ci[1]&&ci[2])||(ci[3]&&(ci[4]||ci[7])&&(ci[5]||ci[8])))&&(ci[6]||ci[9]))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}





}
