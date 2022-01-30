#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double h,l;
    double x;
    cin>>h>>l;
    x=(pow(l,2)-pow(h,2))/(2*h);
    printf("%.13lf\n",x);
    return 0;

}
