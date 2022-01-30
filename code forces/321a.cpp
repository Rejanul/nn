#include<iostream>
using namespace std;
int main()
{
    int a,b,a1=0,b1=0,i=0,c=0;
    string s;
    cin>>a>>b;
    cin>>s;
    int length=s.size();
    while(1)
    {
        if(i==length)
        {
            i=0;
        }
        char cr=s.at(i);
        if(cr=='U')
        {
            b1++;
        i++;
        }
        else if(cr=='D')
        {
            b1--;
            i++;
        }
        else if(cr=='L')
        {
            a1--;
            i++;
        }
        else
        {
            a1++;
            i++;
        }
        int test1=a%a1;
        int test2=b%b1;
         if(test1==0&&test2==0)
    {
        cout<<"yes"<<endl;;
        break;
    }
    else
    {
        cout<<"no"<<endl;
        break;
    }
    }


}
