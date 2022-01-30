#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile;
    ifstream yourfile;
    myfile.open("output.txt");
    yourfile.open("input.txt");
    int n,i,j;
    string s;
    //cin>>n;
    //cin>>s;
    yourfile>>n;
    yourfile>>s;
    j=(n/2);
    for(i=0;i<n/2;i++)
    {
        char c=s.at(i);
        char c1=s.at(i+j);
       if( c=='R'&&c1=='L')
       {
           myfile<<i+1+j<<" "<<i+1<<endl;
           cout<<i+1+j<<" "<<i+1<<endl;

       }
       else

       {
           myfile<<i+1<<" "<<i+1+j<<endl;
           cout<<i+1<<" "<<i+1+j<<endl;
       }
    }
    myfile.close();
    yourfile.close();
}
