#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,counter=0,d,k,w=0,c,temp=0;
    bool f=false;
    vector<int> vec;
//    int arra[500];
//    int arra1[500];
    string arra;
    cin>>n>>k;
    cin>>arra;

    for(int j=0;j<n;)
    {
        temp=k+j;
        if((j+k)>=(n-1))
        {
           counter++;
           break;
        }

       // cout<<"k ="<<k<<endl;
        for(int i=temp;i>j;i--)
        {
            //cout<<"k+j ="<<k+j<<endl;
            if(arra[i]=='1')
            {
                counter++;
                j=i;
               // cout<<"from loop j = "<<j<<"counter= "<<counter<<endl;
                f=true;
                break;
            }

        }
        if(f==false)
        {
            counter=0;
            break;
        }
        f=false;
    }
    //string s,s1="00";
    if(counter==0)
    {
        counter=-1;
    }
    cout<<counter<<endl;

}
