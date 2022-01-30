#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int digit(int num)
{
    int invert;
    if(num==9)
    {
        return 9;
    }

    invert=(num%10);
    if(invert>4)
    {
        return (9-invert);
    }
    else
        return invert;

}
int main()
{
    int n,weight,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,number=0,m=1;
  string s;

  cin>>s;
 if(s[0]=='9')
 {
     cout<<9;
 }
 else{
        n=s[0]-'0';
 if(n>4){
    cout<<9-n;
 }
 else
    cout<<n;
 }

 l=s.size();
 for(int i=1;i<l;i++)
 {
     n=s[i]-'0';
     if(n>4)
     {
         cout<<9-n;
     }
     else
        cout<<n;
 }
 cout<<endl;

  return 0;



}
