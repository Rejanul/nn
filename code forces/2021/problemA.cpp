#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,l,word,binary,x=0;
    
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int letter[30]={0};
        cin>>n>>l;
        for(int j=0;j<n;j++)
        {

            cin>>word;
            std::string binary = std::bitset<30>(word).to_string();
            for(int k=29;k>=0;k--)
            {
               // cout<<binary[k]<<" ";
                if(binary[k]=='1')
                {
                    letter[k]++;
                   // cout<<letter[k]<<" ";
                }
            }
            
        }
        for( int k=29;k>=0;k--)
            {
                if(letter[k]>(n/2))
                {
                    letter[k]=1;
                }
                else
                    letter[k]=0;
                //cout<<letter[k]<<" ";
            }

        for( int k=29;k>=0;k--)
            {
                x+=letter[k]*pow(2,(29-k));
            }

            cout<<x<<endl;

            x=0;
            
        

    }
    
}