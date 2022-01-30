#include <bits/stdc++.h>

using namespace std;



int main()
{
    int sum=-900000000,sumn=0;
    vector<vector<int> > arr(6);
    for (int l = 0; l < 6; l++) {
        arr[l].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[l][j];
        }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

        for(int i=0;i<4;i++)
        {
            for(int k=0;k<4;k++)
            {
             sumn=arr[i][k]+arr[i][k+1]+arr[i][k+2]+arr[i+1][k+1]+arr[i+2][k]+arr[i+2][k+1]+arr[i+2][k+2];
             cout<<"sumn ="<<sumn<<endl;
             if(sumn>sum)
             {
                 sum=sumn;
             }
            }
        }
        cout<<sum<<endl;

    return 0;
}
