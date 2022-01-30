#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
    ll n,weight,value,a=0,b=0,re,r,blue;
  string s,s1,s3;
  char c;
cin>>s>>n;
for(int i=0;i<n;i++)
{
    cin>>r;
    if(r==1)
    {
        reverse(s.begin(),s.end());
    }
    else if(r==2)
    {
        cin>>re>>s1;
        if(re==1){
        s3=s1+s;
        s=s3;
        }
        else{
            s3=s+s1;
            s=s3;
        }

    }
}
cout<<s<<endl;


}
