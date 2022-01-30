#include<bits/stdc++.h>
using namespace std;
int arra1[100000]={0};
int arra2[100000]={0};
int sum(int l,int r,int d)
{
    if(d==1)
    {
        return arra1[r]-arra1[l];
    }
    else
        return arra2[r]-arra2[l];
}
int main()
{
    int n,q,l,r,l1=0,d;
    cin>>n>>q;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>B[j];
    }
    arra1[0]=A[0];
    arra2[0]=B[0];
    for(int f=1;f<n;f++)
    {
        if(f%2==1)
        {
            arra1[f]=B[f]+arra1[f-1];
            arra2[f]=A[f]+arra2[f-1];

        }
        else
        {
            arra1[f]=A[f]+arra1[f-1];
            arra2[f]=B[f]+arra2[f-1];
        }

    }
     for(int i=0;i<n;i++)
    {
      cout<<arra1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arra2[j]<<" ";
    }
    cout<<endl;
    for(int f=0;f<q;f++)
    {
        cin>>d>>l>>r;
        cout<<sum(l,r,d)<<" "<<endl;
    }

}
