#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int c,t,result=0,q,p;
    int n;
    int arra[100000];
    string s;
    bool f=false;

   cin>>s;
   n=s.size();
   for(int i=0;i<n;i++)
   {
     if(n<2)
     {
      // cout<<"from break"<<endl;
       break;
     }
     if(s[i]==s[i+1])
     {
       s.erase(i,2);
       f=!f;
       n-=2;
      // cout<<"s="<<s<<endl;
      // cout<<"n="<<n<<endl;
      // cout<<f<<endl;
      if(i!=0){
         i-=2;
      //   cout<<"i="<<i<<endl;
       }
        else
        i-=1;
     }

   }
   if(f==true)
   {
     cout<<"Yes"<<endl;
   }
   else
   cout<<"No"<<endl;



    }
