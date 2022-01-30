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
    int n,weight=0,value=0,a=0,b,t,x,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m;
    int ch;
    bool ci[10];
  string s;
  //int arra[maxn];
  std::vector<int> arra[maxn];
  vector<int>::iteretor it;
  bool flag=true;
//  char c;
 cin>>m>>n;
 for(int i=0;i<m;i++)
 cin>>arra[i];

 for(int j=0;j<n;j++)
 {
   cin>>cost;
   it=find(arra.begin(),arra.begin()+m,cost);
   if(it!=arra.begin()+m)
   {
     cout<<it-arra.begin()+1<<endl;
   }
   else
   cout<<"Not Found"<<endl;
  /* for(int f=0;f<m;f++)
   {
     if(cost==arra[f])
     {
       cout<<f+1<<endl;
       flag=false;
       break;
     }
   }
   if(flag)
   {

     cout<<"Not Found"<<endl;
   }
   flag=true;*/
 }






}
