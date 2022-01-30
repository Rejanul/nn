#include<bits/stdc++.h>
using namespace std;

//1286 A garland unsolved
int main()
{
    int n,odd=0,even=0,complexity=0,p=-1,q=1,t,m1[2],m2[2],x=0;
    char arra[400][400];
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                cin>>arra[i][j];
                if(arra[i][j]=='*')
                {
                    m1[x]=i;
                    m2[x]=j;
                    x++;
                }
            }
            
        }
        cout<<endl;
        for(int l=0;l<n;l++)
        {
            for(int m=0;m<n;m++){
                if((m1[0]!=m1[1])&&(m2[1]!=m2[0])){
                if((l==m1[0]&&m==m2[0])||(l==m1[1]&&m==m2[1])||(l==m1[0]&&m==m2[1])||(l==m1[1]&&m==m2[0]))
                    {
                        cout<<"*";
                    }
                
                else
                    cout<<".";
                }
                

                else{
                    if((l==m1[0]&&m==m2[0])||(l==m1[1]&&m==m2[1]))
                         {
                            cout<<"*";

                         }
                    if(m1[0]==m1[1])
                    {
                         
                          if((m1[0]<n-1)&&((l==(m1[0]+1)&&m==m2[0])||(l==m1[1]+1 &&m==m2[1])))
                             {
                                 cout<<"*";
                             }
                             else if((m1[0]>=n-1)&&((l==(m1[0]-1)&&m==m1[1])||(l==(m2[0]-1) &&m==m2[1])))
                             {
                                 cout<<"*";
                             }
                             else
                             cout<<".";
                    }
                   else if(m2[0]==m2[1]){
                        if((m2[1]<n-1)&&((l==(m1[0])&&m==m2[1]+1)||(l==(m1[1]) &&m==m2[0]+1)))
                             {
                                 cout<<"*";
                             }
                             else if((m2[0]>=n-1)&&((l==(m1[0] )&&m==m2[1]-1)||(l==m1[1] &&m==m2[1]+1)))
                             {
                                 cout<<"*";
                             }
                             else
                             cout<<".";
                   }
                  
                    }
    
                

            }
            cout<<endl;
            
        }
        cout<<endl;

   
    }}

 
