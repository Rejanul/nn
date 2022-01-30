#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int  maxn = 2e5+10;
typedef pair<int ,int> pairs;
int gcd(int a,int b)
{
    while(a!=0&&b!=0)
    {
        if(a>b)
        {
            a%=b;
        }
        else
            b%=a;
    }
    return max(a,b);
}
int main()
{
    int i,j, n,weight=0,value=0,a=0,b=0,t,x,y,w,l=0,trump,cost=0,m,f,g;
  string s;
  int arra[100][100];
  int arra1[100][100]={{1},{1}};
  bool test[100][100]={false};
  bool flag=true;
  bool flag1=true;
  char c;
  cin>>m>>n;
  i=0;
  for( i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          cin>>arra[i][j];
      }
  }
  for( i=0;i<m;i++)
  {

      for(j=0;j<n;j++)
      {
          arra1[i][j]=1;
      }

  }
  /* for( i=0;i<m;i++)
  {

      for(j=0;j<n;j++)
      {
          cout<<arra1[i][j]<<" ";
      }
      cout<<endl;
  }*/
    for( int i1=0;i1<m;i1++)
  {
      for( int j1=0;j1<n;j1++)
      {
          if(arra[i1][j1]==0)
          {
              for(int f1=0;f1<n;f1++)
              {
                  arra1[i1][f1]=0;
              }
              for(int f2=0;f2<n;f2++)
              {
                  arra1[f2][j1]=0;
              }

          }
      }
  }

   for( i=0;i<m;i++)
  {
      for( j=0;j<n;j++)
      {
          if(arra[i][j]==1)
          {
              for(f=0;f<n;f++)
              {
                  if(arra1[i][f]==1)
                  {
                      //cout<<"1 ..1 "<<endl;
                      flag=false;
                      break;
                  }
              }
              if(flag){
              for(f=0;f<m;f++)
              {
                 if( arra1[f][j]==1)
                 {
                     flag1=false;
                     break;
                 }
              }
              }
             if(flag1&&flag)
          {
              //cout<<i<<j<<endl;
              cout<<"NO"<<endl;
              return 0;
          }
          flag=true;
          flag1=true;
          }

      }
  }
  cout<<"YES"<<endl;

    for( i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          cout<<arra1[i][j]<<" ";
      }
      cout<<endl;
  }

}
