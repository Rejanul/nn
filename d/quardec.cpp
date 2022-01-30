#include<bits/stdc++.h>
using namespace std;
int binary[1000000];


int main()
{
    double a,b,c,r,r1;
    cout<<"let ax^2+bx+c=0 is a equation then input a,b,c"<<endl;
    cin>>a>>b>>c;

    if(b*b<4*c*a)
    {
        cout<<"there are imaginary solution"<<endl;
    }
    else if(b*b==4*c*a)
    {
        r=-(b/(2*a)); //formula for one solution
        cout<<"solution is :"<<r<<endl;
    }
    else
    {
        r=(-b-sqrt(b*b-4*c*a))/(2*a); //quardic formula
        r1=(-b+sqrt(b*b-4*c*a))/(2*a);
        cout<<"The solution are "<<r<<" and "<<r1<<endl;

    }



}
