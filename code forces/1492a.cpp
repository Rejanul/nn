#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,a,b,c,t,a1,b1,c1,a2,b2,c2;
    long long int res;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>p>>a>>b>>c;
       /* if(p<a && p<b && p<c)
        {
            res = min((a-p),min(b-p , c-p));
        }
        else if((p==a||p==b||p==c))
        {
            res = 0;
        }*/
            a1 = ceil(p/(a*1.00));
            b1 = ceil(p/(b*1.00));
            c1 = ceil(p/(c*1.00));
            //cout<<a1<<b1<<c1<<endl; 
            res = min((a1*a - p),min((b1*b-p),(c1*c-p)));

       cout<<res<<endl;
    }

}