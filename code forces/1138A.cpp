#include<iostream>
using namespace std;
int main()
{
    int susi[1000000],n,tuna=0,eel=0,k=0,subsegtment[2],o=0;
    int subset[100000],large;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>susi[i];
    }
    for(int j=0;j<n;j++)
    {
        if(susi[0]==1){
                tuna++;
        }
        if(susi[j]==2)
        {
            eel++;
        }
        if(tuna!=0)
        {
            subset[k]=tuna;
            k++;
            tuna=0;
        }
        if(eel!=0)
        {
            subset[k]=eel;
            k++;
            eel=0;
        }
    }

    for(int j=1;j<(k-1);j++)
    {
        if(subset[j]<subset[j-1])
        {
             subsegtment[o]=subset[j]*2;
             o++;
        }
        else
        {
            subsegtment[o]=subset[j]*2;
            o++;
        }
        if(o==2)
        {
            if(subsegtment[0]>subsegtment[1])
               {
                   large=subsegtment[0];
               }
                else
                {
                large=subsegtment[1];}
              o==0;
        }

    }
    cout<<large<<endl;
}
