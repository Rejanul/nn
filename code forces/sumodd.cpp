#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,k;
  string s;
  int arra[100];
  bool flag=true;
  char c;
  cin>>t;

for(int i=0;i<t;i++)
{
    cin>>n>>k;
    if(n%2!=k%2)
    {
       cout<<"NO"<<endl;
    }
    else{
        if(k>sqrt(n))
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}


}
