#include<iostream>
using namespace std;
int team(int n,int m)
{
    //cout<<"from team"<<endl;
    int t1;
    if(n==0||m==0||(m+n)<3)
    {
        //cout<<"from team 1"<<endl;
        return 0;
    }
     else if(n>m)
    {

        for(int i=m;i>0;i--)
        {
            if((i*2)<=n)
            {
               // cout<<"from team 2"<<endl;
               return i;

            }

        }

    }
    else if(m>n)
    {
         for(int i=n;i>0;i--)
        {
            if((i*2)<=m)
            {
               // cout<<"from team 3"<<endl;
                return i;
              // cout<<i<<endl;


            }

        }
    }


}
int main()
{
    int n,m,s,s1,t=0;
    cin>>n>>m;
   if(n==0||m==0||(m+n)<3)
   {
       cout<<0<<endl;
   }
    else if( (n==m)&&n>0&&m>0&&(n+m)>2 )
   {
       cout<<(n+m)/3<<endl;
   }
   else if(n>m)
    {
        for(int i=m;i>0;i--)
        {
            if((i*2)<=n)
            {
                t=i;
                s=m-i;
                s1=n-(i*2);
                t=t+team(s,s1);
              // cout<<"from n>m"<<t<<endl;
              cout<<t<<endl;

                return 0;
            }

        }
    }
    else {

        for(int i=n;i>0;i--)
        {
            if((i*2)<=m)
            {
                t=i;
                s=n-i;
                s1=m-(i*2);
                t=i+team(s,s1);
              //cout<<"from else"<<t<<endl;
              cout<<t<<endl;
              return 0;
            }

        }

    }


}
