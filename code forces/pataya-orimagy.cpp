#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int f,p,r,g,b;
    cin>>f>>p;
   r=ceil((f*2)/p);
   g=ceil((f*5)/p);
   b=ceil((f*8)/p);
   cout<<r+g+b<<endl;
}
