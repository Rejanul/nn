#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,s,c,t,result=0,q,p,sum1=0,sum2=0,remender,divisor,number1;
    string number;
    bool fluge=false;
    int arra[100000];
   cin>>t;
   for(int i=0;i<t;i++)
   {
       sum1=0;

       cin>>n;
       cin>>number;
       //number1=number;
       for(int f=0;f<n;f++)
       {
           remender=(number[f]-48);
            // remender=number1%10;
           sum1=sum1+remender;
           //number1=number1/(10);

       }
      // cout<<"sum of no"<<sum1<<endl;
       for(int j=n-1;j>0;j--)
       {
           remender=(number[j]-48);
          // cout<<"remender="<<remender<<endl;
           if(((number[j]-48)%2)!=0&&sum1%2==0)
           {
               cout<<number<<endl;
               fluge=true;
               break;
           }
           else
           {
               number[j]=' ';
             //  cout<<"from else number="<<number<<endl;
               sum1=sum1-remender;
              // cout<<"from else sum1="<<sum1<<endl;

           }

       }

       if(fluge==false)
       {
           cout<<-1<<endl;

       }
       fluge = false;
   }
   return 0;





    }



