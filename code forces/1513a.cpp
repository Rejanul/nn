#include<bits/stdc++.h>
using namespace std;

//1286 A garland unsolved
int main()
{
    int n,odd=0,even=0,complexity=0,p=-1,t,m1[2],m2[2],x=0;
    //char arra[400][400];
    int arra[100];
    cin>>t;

    for(int k=0;k<t;k++){
        cin>>n>>p;
        int l=0;
        
        if(p==0)
        {
            for(int j=0;j<n;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
        }
        else if(p>0 && (p*2+1)>n)
        {
            cout<<-1<<endl;
        }
        else
        {
            //q=n/p;
           /* while(l<=n)
            {
                int g=l;
                for(;g<q;g+=2)
                {
                    cout<<g<<" ";
                }
                cout<<q<<" ";
                g=l+1;
                for(;g<q;g+=2)
                {
                    cout<<g<<" ";
                }
                l=g;
            }*/
            cout<<1<<" ";
            int st=1;
            int nd = 0;
            for(int o=0;o<p;o++)
            {
                st+=2;
                nd+=2;
                cout<<st<<" "<<nd<<" ";
               
            }
            if(st<n)
            {
                for(int q=st+1;q<=n;q++)
                {
                    cout<<q<<" ";
                }
            }
            cout<<endl;
        }
      
    }
    
}

 
