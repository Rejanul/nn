#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dis1=0,dis2=0,m,k;
    cin>>n;
    int arra[n]={9};
    fill(arra,arra+n,999999999);
    vector <int> dp(3,0);
    for(int day=0;day<n;day++){
    vector<int> vec;
    vector<int> new_dp(3,0);
    for(int i=0;i<3;i++){
            cin>>m;
    vec.push_back(m);
    }
    //cout<<vec[0]<<endl;
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            if(i!=j)
            new_dp[j]=max(new_dp[j],(dp[i]+vec[j]));
            //cout<<"newdp"<<new_dp[j]<<"dp i= "<<dp[i]<<"vec j= "<<vec[j]<<endl;
        }
    }
    dp=new_dp;
    }
    //cout<<dp[0]<<endl;

    cout<<max(dp[0],max(dp[1],dp[2]))<<endl;
}
