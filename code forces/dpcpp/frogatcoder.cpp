#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dis1=0,dis2=0,m,k;
    cin>>n>>k;
    int arra[n]={9};
    fill(arra,arra+n,999999999);
    arra[0]=0;
    vector<int> vec;
    for(int i=0;i<n;i++){
            cin>>m;
    vec.push_back(m);
    }
   // cout<<arra[4]<<endl;
    for(int j=0;j<(n-1);j++)
    {
        if(n-j<k)
        {
             k=n-j;
        }
        for(int f=j;f<j+k;f++){
            dis1=arra[j]+abs(vec[j]-vec[f+1]);
            //dis2=arra[j]+abs(vec[j]-vec[+2])
            if(arra[f+1]>dis1){
            arra[f+1]=dis1;
            //cout<<j+1<<" "<<arra[j+1]<<endl;
            }
//            if(arra[j+2]>dis2){
//            arra[j+2]=dis2;
  //cout<<arra[j+2]<<" "<<j+2<<endl;
  }
        }

    cout<<arra[n-1]<<endl;
}
