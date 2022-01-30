#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,inc,maxop,dlt,people,counter=0,no;
    long long avg=0,avg1=0,avg2;

    int power[100000];
    cin>>no>>inc>>maxop;
    n=no;
    for(int i=0;i<n;i++)
    {
        cin>>power[i];
    }
    sort(power,power+n);
    for(int j=0;j<n;j++)
    {
        avg+=power[j];
    }
    avg1=avg/n;
    avg=0;
    for(int k=0;k<n;k++)
    {

        if((avg1-power[k])<=0)
        {
            break;
        }
    if((avg1-power[k])>avg1)
    {
        power[k]=0;
        maxop--;
        no--;
    }
    counter++;
    }
   // while(1){
    if(maxop>(no*inc)&&no!=1)
    {
        avg2=no*inc;

       //power[counter+1]=0;
    //    maxop--;
      //  no--;
     ////   counter++;
    //}
    //else
       // break;
   }
   else
    avg2=maxop;
    for(int l=counter;l<n;l++)
    {
        avg+=power[l];
    }
    if(n)
    cout<<(avg+avg2)/no<<endl;;

}
