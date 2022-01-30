#include<bits/stdc++.h>
using namespace std;
double amost()
{
    double x=1.0,f=0.0;
    f=10*pow(0.12,1.0)*pow(0.88,9.0)+45*pow(0.12,2.0)*pow(0.88,8.0)+pow(0.88,10);
   // cout<<"from most f = "<<f<<endl;
    return f;
}
double factorial(double x)
{
    double f=1.00,g=1.00;
    for(double i=10.0;i>x;i--)
    {
        f*=i;
       // cout<<"from factorial f = "<<f<<endl;
    }
    for(double j=10.0-x;j>0;j--)
    {
        g*=j;
        //cout<<"from factorial f = "<<f<<endl;
    }
    return f/g;
}
double at_least()
{
    double x=2.0,f=0.0;
   for(x;x<11;x++)
   {
       f+=factorial(x)*pow(0.12,x)*pow(0.88,(10-x));
      // cout<<"from least f = "<<f<<endl;
   }
    return f;
}
int main()
{
    double least,most;
    least = at_least();
    most = amost();
    cout<<fixed<<setprecision(3)<<most<<endl<<least<<endl;

}