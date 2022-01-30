#include<iostream>
#include<math.h>
using namespace std;
int arra[100];
bool flug=false;
int print(int arra[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<"from func"<<endl;
    flug=true;

}
int main()
{

     long long  testcase,a,n,remender,quatent;
     int test,counter=0,position=0;

    cin>>testcase;

    for(int i=0;i<testcase;i++)
    {
        cin>>n;
        for(int h=0;h<n;h++)
        {
            cin>>arra[h];
        }
        for(int j=1;j<=n;j++)
        {
            for(int f=j-1;f<n;f++)
            {
                if(arra[f]==j)
                {
                for(int c=f+1;c>(j-1);c--){
                position=c;
                  test =  arra[position-1];
                  arra[position-1]=arra[position];
                  arra[position]=test;

                  counter++;
                  if(counter==(n-1))
                  {
                        print(arra,n);
                        counter=0;
                        break;

                  }
                }
                break;
                    }

                }
                if(flug==true)
                {
                    break;
                    flug==false;
                }
            }
        }
    }

