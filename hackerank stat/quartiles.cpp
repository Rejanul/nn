#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t,t1,x;
    double arra[50],trd,nd,st;
    cin>>n;
    t=n;
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    sort(arra,arra+n);
    if(n%2==1)
    {
        nd = arra[n/2];
        t1 = (n/2)+1;
        n=n/2;
    }
    else
    {  
       nd = double((arra[n/2-1]+arra[n/2])/2);
       //cout<<nd<<endl;
       //cout<<
        t1 = (n/2);
       n/=2;
      // cout<<n<<endl;
    }
    if((n)%2==1)
    {
       x=n/2;
        st = arra[x];
        //cout<<st<<" st if"<<endl;
        
    }
    else 
    {
         x=n/2;
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
        cout<<"done else"<<endl;
        x = (t1+t)/2;
       trd = (arra[x-1]+arra[x])/2;
     //  cout<<trd<<"trd else"<<endl;
       
    }
    cout<<st<<endl<<nd<<endl<<trd<<endl;
       
    return 0;
}

