#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159
int digit(int num)
{
    int rem,x,counter=1;
    x=abs(num);
    while(x>9)
    {
       x=x/10;
       counter++;
    }
    return counter;
}
int main() {

 int A,B,C,a1,b1,c1;
 cin>>A>>B>>C;
 cout<<"A = "<<A<<", B = "<<B<<", C = "<<C<<endl;
a1=digit(A);
b1=digit(B);
c1=digit(C);
cout<<a1<<endl;
if(A<0) {a1++;}
if(B<0) b1++;
if(C<0) c1++;
cout<<a1<<endl;
cout<<"A = ";
for(int i=0;i<(10-a1);i++)
{
    cout<<" ";
}
cout<<A;
 //cout<<digit(A)<<endl;
 cout<<", B = ";
for(int j=0;j<(10-b1);j++)
{
    cout<<" ";
}
cout<<B;
cout<<", C = ";
for(int i=0;i<(10-c1);i++)
{
    cout<<" ";
}
cout<<C<<endl;

//........................//

cout<<"A = ";
for(int i=0;i<(10-a1);i++)
{
    cout<<"0";
}
cout<<A;
 //cout<<digit(A)<<endl;
 cout<<", B = ";
for(int j=0;j<(10-b1);j++)
{
    cout<<"0";
}
cout<<B;
cout<<", C = ";
for(int i=0;i<(10-c1);i++)
{
    cout<<"0";
}
cout<<C<<endl;



cout<<"A = "<<A;
for(int i=0;i<(10-a1);i++)
{
    cout<<" ";
}

 //cout<<digit(A)<<endl;
 cout<<", B = "<<B;
for(int j=0;j<(10-b1);j++)
{
    cout<<" ";
}
cout<<", C = "<<C;
for(int i=0;i<(10-c1);i++)
{
    cout<<" ";
}
cout<<endl;



	return 0;
}
