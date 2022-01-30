

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,x,counter=0,t=0,p1,p2,ribon,r=0,maximum=0;
    bool fluge=false;
     bool ffluge = false;
    int arra[4];

    cin>>ribon;
    for(int i=0;i<3;i++)
    {
        cin>>arra[i];
    }
    sort(arra,arra+3);
    for(int f=0;f<3;f++){
    x=ribon;
    n=x/arra[f];
   // cout<<"f  ="<<f<<endl;
    if((x%arra[f])==0)
    {

        if(n>maximum)
        {
            maximum=n;
        }
        r++;
        if(f==0)
        {
            break;
        }
       }
    a=n*arra[f];

    b=ribon-a;
    if(f==0)
    {
        p1=1;
        p2=2;
    }
    else if(f==1)
    {
        p1=0;
        p2=2;
    }
    else if(f==2)
    {
        p1=0;
        p2=1;
    }

    for(int j=0;j>=0;j++)
    {

       c=a-arra[f]*j;
        b=ribon-c;
        cout<<" from loop c ="<<c<<"ARRA[F] "<<arra[f]<<"f"<<f<<endl;
        cout<<"from loop b ="<<b<<endl;
      if(c<arra[0])
      {
         cout<<"from break"<<endl;
          break;
      }
      for(int k=0;k>=0;k++)
      {
          for(int l=0;l>0;l++)
          {
              int sum=(arra[p1]*k)+(arra[p2]*l);
              if((arra[p1]*k)>b)
              {
                ffluge = true;
                break;
              }
              if(sum>b)
              {
                  fluge=true;
                  break;
              }
              if(b==sum)
              {
                  int x=n-j+k+l;

                  if(x>maximum)
                  {
                      maximum=x;
                  }
                 r++;

          }
          fluge = false;
          if(ffluge==true)
          {
              break;
          }
      }
      ffluge=false;


    }

    }
    cout<<maximum<<endl;

}
}

