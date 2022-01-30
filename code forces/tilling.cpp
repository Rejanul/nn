#include<iostream>
using namespace std;
int main()
{
    string a[50][50];
    int n,i,j,ara[50*50],f=0,test=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }
    if(a[0][0]=="."||a[0][n-1]=="."||a[n][0]=="."||a[n-1][n-1]==".")
       {
          cout<<"no"<<endl;
            return 0;
       }
        for(int k=0;k<n-1;k++){
       for(j=1;j<(n-1);j++)
       {

           if(a[k][j]=="."){
           if(a[k][j]=="."&&a[k+1][j]=="."&&a[k+2][j]=="."%%a[k+1][j-1]=="."&&a[k+1][j+1]);{
           ara[f]=k+j*10;
           ara[f+1]=(k+1)+j*10;
           ara[f+2]=(k+2)+j*10;
           ara[f+3]=(k+1)+(j-1)*10;
           ara[f+4]=(k+1)+(j+1)*10;
           test=1;
           }
           if(a[k][j]=="."&&test!=1)
           {
            Cout<<"no"<<endl;
            return 0;
            }
       }
        }
}
