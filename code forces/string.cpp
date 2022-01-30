#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,s,c,t,result=0,q,p=-1;
    bool fluge=false;
    int arra[100000];
    string s1,s2;
    cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>n;
       cin>>s1>>s2;

       for(int j=0;j<n;j++)
       {
         if(s1[j]!=s2[j])
         {

           if(p!=-1){
            if((s1[j]==s1[p])&&(s1[j]==s1[p]))
            {
              cout<<"YES"<<endl;
              break;
            }
            else
            {
              cout<<"No"<<endl;
              break;
            }
          }

           if(fluge==false){
           p=j;
           fluge=true;
         }

         }
       }
       p=-1;
       fluge=false;

   }





    }
