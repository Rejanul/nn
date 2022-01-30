

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,sum1=0,sum2=0,dif;
   cin>>n;
    vector<vector<int> > vec(n ,vector<int> (n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        cin>>vec[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i==j)
            {
                sum1=sum1+vec[i][j];
            }



        }
        sum2=sum2+vec[i][n-i-1];

    }
    dif= abs(sum1-sum2);

    cout<<dif<<endl;


}

