#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll  maxn = 10e9+10;
typedef pair<int ,int> pairs;
int arra[10000];
int ok(int A,int t)
{
    int ch=arra[0]%A;
    for(int i=1;i<t;i++)
    {
        if(arra[i]%A!=ch) {return 0;}
    }
    return 1;
}
int main()
{
    int n,weight=0,value=0,a,base,t,x=0,y,w,l=0,trump,cost=0,c,d,k,cost1=0,m,r,power,modu;
    int ch;
    bool ci[10];
  string s;
  //ll arra[1000];
  vector <int> v;
  bool flag=true;
//  char c;
 cin>>t;
 //a=maxn;
for(int i=0;i<t;i++)
{
   cin>>arra[i];
}
 d=abs(arra[1]-arra[0]);
for(int i=1;i*i<=d;i++)
{
    if(d%i!=0) continue;
    cost=i;
    cost1=d/i;
  //  cout<<cost<<"  "<<cost1<<endl;
    if(ok(cost,t)&&cost!=1) {v.push_back(cost);}
    if(ok(cost1,t)&&cost1!=cost) {v.push_back(cost1);}

}
sort(v.begin(),v.end());
//cout<<v[3]<<endl;
for(int g=0;g<v.size();g++)
    cout<<v[g]<<" ";
}
