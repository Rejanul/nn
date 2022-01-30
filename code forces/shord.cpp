#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int gcd(int a,int b)
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
}
int main()
{
   ll weight,value=0,a=0,b=0,t,x,y,w,l=0,temp,cost=0,fmin=999999999,smin=0,sum=0,n;

  string s;
  int arra[99999];
  vector<ll> vec;
  bool flag=true;
  char c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>temp;
        vec.push_back(temp);
        //cin>>arra[i];

    }
   // sort(vec.begin(),vec.end());
     n=*max_element(vec.begin(),vec.end());
     a=n-vec[0];
    for(int j=1;j<t;j++)
    {
        a=gcd(a,n-vec[j]);
    }


    sum=accumulate(vec.begin(),vec.end(),sum);
    //cout<<smin<<fmin<<endl;
    cost=n*t-sum;
    cout<<cost/a<<" "<<a<<endl;


}
