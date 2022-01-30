#include<bits/stdc++.h>
using namespace std;

//1286 A garland unsolved
int main()
{
    int n,odd=0,even=0,complexity=0,p=-1,q=1,t;
    int arra[100];
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        p=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];

    }
    for(int j=0;j<n-2;j++)
    {
        if(arra[j]!=arra[j+1]&&arra[j]!=arra[j+2])
        {
            p=j;
            break;
        }
        
    }
    if(p!=-1)
    {
        cout<<p+1<<endl;
    }
    else
        {if(arra[n-1]!=arra[n-3])
        {
            cout<<n<<endl;
           
        }
        else
            cout<<n-1<<endl;
        
        }
    }

 }
