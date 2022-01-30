// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n,l,w,flag=0,count=0;
    cin>>n>>l>>w;
    vector<int> vect(n);
    for(int i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    int j=0;
    while(flag<l)
    {
        if(j<n)
        {
            if(flag<vect[j])
            {
                count+=ceil((vect[j]-flag)/w);
                flag+=vect[j]+w;
                j++;
            }
            flag+=vect[j]+w;
            j++;
        }
        count+=ceil((vect[n-1]-flag)/w);
        flag=l;
        
    }
    cout<<count<<endl;

    return 0;
}