#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,t,t1,x,c=0;
    double farra[50],trd,nd,st,arra[100000];
    int f[50];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>farra[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>f[j];
    }
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<f[k];l++)
        {
            arra[c++]=farra[k];
            
        }
    }
    t=c;
   // c--;
    //  for(int i=0;i<c;i++)
    // {
    //     cout<<arra[i]<<" ";
    // }
   // cout<<c<<endl;
    sort(arra,arra+c);
    //  for(int i=0;i<c;i++)
    // {
    //     cout<<arra[i]<<" ";
    // }
    if(c%2==1)
    {
        nd = arra[c/2];
        t1 = (c/2)+1;
        c=c/2;
    }
    else
    {  
       nd = double((arra[c/2-1]+arra[c/2])/2);
       //cout<<nd<<endl;
       //cout<<
        t1 = (c/2);
       c/=2;
      // cout<<n<<endl;
    }
    if((c)%2==1)
    {
       x=c/2;
        st = arra[x];
        //cout<<st<<" st if"<<endl;
        
    }
    else 
    {
         x=c/2;
       st = (arra[x-1]+arra[x])/2;
          // cout<<st<<" st else"<<endl;
       
    }
    if( (t1+t)%2==1)
    {
        x = (t1+t)/2;
      // cout<<"done if"<<endl;
        trd = arra[x];
       // cout<<trd<<"trd if"<<endl;
       
        
    }
    else 
    {
        //cout<<"done else"<<endl;
        x = (t1+t)/2;
       trd = (arra[x-1]+arra[x])/2;
      // cout<<trd<<"trd else  x"<<x<<endl;
       
    }
    cout<<fixed<<setprecision(1)<<trd-st<<endl;
       
    return 0;
}

