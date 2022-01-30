#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll  maxn = 10e9+10;
const int maxm = 2e5+10;
typedef pair<int ,int> pairs;
int prime(int num)
{
    if(num==2)
    {
        return 1;
    }
    if(num==1)
    {
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
   // cout<<num<<" ";
    return 1;
}

int main()
{
    ll n,weight=0,value=0,a=maxn,base,t,x=0,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m,r,power,modu;
    int ch;
    bool ci[10];
  string s;
  //ll arra[1000];
  bool flag=true;
//  char c;
 cin>>t;
for(int i=0;i<t;i++)
{
    vector<int> v;
    v.push_back(2);
   cin>>cost>>cost1;
   value=0;
   if(cost>cost1)
   {
       swap(cost,cost1);
   }
   if(cost%2==0&&cost>2)
   {
      cost++;
   }
   else if(cost<=2)
   {
       value=1;
       cost=3;
   }
  for(int j=cost;j<=cost1;j+=2)
  {

      for(int f=0;f<v.size();f++)
      {
          if(v[f]*v[f]>j)
          {
              break;
          }
          else if(j%v[f]==0)
          {
              flag=false;
              break;
          }
      }
      if(flag){
      if(prime(j))
      {
          value++;
          v.push_back(j);

      }
      }
      flag=true;
  }
 // cout<<endl;
  cout<<value<<endl;

}




}
