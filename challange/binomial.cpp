#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
double factorial(double X)
{
  //  cout<<"i am in f"<<endl;
    double r=1.0,s=1.0,x=X;
    for(double i=6.00;i>x;i--)
    {
        r*=i;
       // cout<<"i am in loop1"<<endl;
    }
    for(double j=6-x;j>0;j--)
    {
        s*=j;
      // cout<<"i am in loop2"<<endl;
    }
   // cout<<"i am in fact r ="<<r<<s<<endl;
    return r/s*1.00;
}
double result(double x)
{
    //cout<<"i am in result"<<endl;
    double r=0.0;
    for(;x<7;x++){
     r+=factorial(x)*pow((109.0/209.0),x)*pow((100.0/209.0),(6.0-x));
     //cout<<"i am in for r ="<<r<<endl;
    }
    return r;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double y = result(3.00);

    cout<<fixed<<setprecision(3)<<y<<endl;  
    return 0;
}
 
 
