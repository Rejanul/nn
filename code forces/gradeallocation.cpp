#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dis1=0,dis2=0,m,k=999,t,c,s=0;
    char g,h;
    cin>>t;

    //vector <int> dp(n,0);

    //vector<int> vec;
    char arra[5000];
    int arra1[5000];
    for(int f=0;f<t;f++){
  //  vector<int> new_dp(0);
  cin>>n;
    for(int i=0;i<n;i++){

           cin>>arra[i];

           if(arra[i]<k)
           {
               h=arra[i];
               k=h;
           }
    }
    for(int j=0;j<n;j++)
    {
        if(h==arra[j])
        {
            arra1[j]=j;
        }
    }





}
}
