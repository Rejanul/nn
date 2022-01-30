#include<iostream>

using namespace std;

int main(){
string code,de;
int n=0,l;
cin>>l;
cin>>code;
for(int i=0;i<l-n;i++)
{
    cout<<code[i+n];
    n=n+i;
}
cout<<endl;

}
