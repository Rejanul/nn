#include<bits/stdc++.h>
using namespace std;

//1286 A garland unsolved
int main()
{
    double odd=0,even=0,complexity=0,p=0,q=1,t,res=0,xmin=9999999999,ymin=9999999999,xmax=-9999999999,ymax=-9999999999,x,y;
    int n;
    //long long int arra[1000000][2];
    //vector<vector<long long int> > v;
    //cin>>t;
    
        cin>>n;
        for(int j=0;j<n;j++)
        {
         cin>>x>>y;
         xmax = max(xmax,x);
         xmin = min(xmin,x);
         ymax = max(y,ymax);
         ymin = min(ymin,y);
       // cout<<"xmax = "<<xmax<<"xmin = "<<xmin<<"ymax = "<<ymax<<"ymin = "<<ymin<<endl;
        }
        res = max(xmax-xmin,max(ymax-ymin,max(sqrt(xmin*xmin+ymax*ymax),max(sqrt(xmin*xmin+ymin*ymin),max(sqrt(xmax*xmax+ymin*ymin),sqrt(xmax*xmax+ymax*ymax))))));
     /*  for(int k=0;k<n-1;k++)
       {
           for(int l=1;l<n;l++)
           {
               p =sqrt(pow((arra[k][0]-arra[l][0]),2)+pow((arra[k][1]-arra[l][1]),2));
                res = max(p,res);
              //  cout<<p <<res<<endl;
           }
       }*/
       cout<<fixed<<setprecision(13)<<res<<endl;
    
 }
