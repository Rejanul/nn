#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dis1=0,dis2=0,m,k;
    cin>>n;

    vector <int> dp(n,0);

    vector<int> vec;
  //  vector<int> new_dp(0);
    for(int i=0;i<n;i++){
            cin>>m;
    vec.push_back(m);
    }
    //cout<<vec[0]<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((vec[j]!=vec[i]-1)&&(vec[j]!=vec[i]+1))
            {
                dp[j]=max(dp[j],dp[j]+vec[i]);
            }
        }

    }
    //cout<<dp[0]<<endl;

    m=*max_element(dp.begin(),dp.end());
    cout<<m<<endl;

}
