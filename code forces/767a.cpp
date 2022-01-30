#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=3,b=1,c=9,x,counter=0,t=0,p1,p2,ribon,d=7,sum=0;
    vector< pair <int,int> > vect;
    
   int arr[2000] ;
  int arr1[2000] ;
    
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n>>a;
       
       for (int i=0; i<n; i++)
       {
           cin>>arr[i];
       }
        for (int i=0; i<n; i++)
       {
           cin>>arr1[i];
       }
            for (int i=0; i<n; i++){
            vect.push_back( make_pair(arr[i],arr1[i]) );
            }
        sort(vect.rbegin(), vect.rend());
        n--;
        while(n)
        {
            if((sum+vect[n].first)<=a)
            {
                sum+=vect[n].second;
            }
        }
        cout<<sum<<endl;
        sum=0;
        
        
        
    }
 
    
}