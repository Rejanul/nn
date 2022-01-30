#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,dis1=0,dis2=0,m,k,s1=0,s2=0,s3=1,counter=0,diff=0;
    cin>>n;
    int arra[n];
    int arra1[n]={0};

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
        arra1[i]=arra[i];

    }
   // cin>>m;


    for(int g=0;g<n;g++)
    {
        for(int j=g;j<n;j++)
        {
            if(g!=j)
            {
                if(arra[j]>arra[g]){
                if((j-g)==(arra[j]-arra[g]))
                {
                    arra1[j]=max(arra1[j],arra1[g]+arra[j]);
                   // cout<<"j  g = "<<g<<j<<" arra[j]"<<arra1[j]<<endl;
                }
                }
            }

        }
    }
//
    m=max_element(arra1,arra1+n)-arra1;
    cout<<arra1[m]<<endl;

}
