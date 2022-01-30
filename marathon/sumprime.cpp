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
for(int f=0;f<t;f++)
{
    cost=0;
    value=0;
   cin>>m>>n;
   if(m>n) swap(m,n);
   for(int i=2;;i++)
   {
       for(int j=2;j<=sqrt(i);j++)
       {
           if(i%j==0)
           {
               flag=false;
               break;
           }
       }
       if(flag)
       {
           cost++;
           if(cost==m)
           {
               value+=i;
           }
           if(cost==n)
           {
               value+=i;
           }
       }
       flag=true;
       if(cost==n)
       {
           break;
       }
   }
   cout<<"Case "<<f+1<<":"<<value<<endl;
}





}
