#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
   long long int n,weight,value=0,a=0,b=0,t,x=0,y=0,w,l=0,trump,cost=0,z=0,s,c,d,m;
//  string s;
  bool flag=true;
  vector<int> vec,vec1;
  //char c;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>t;
    vec.push_back(t);
    vec[i]+=y;
    y=vec[i];

  }
   for(int i=0;i<n;i++)
  {
    cout<<vec[i]<<" ";

  }
  cin>>m;
  for(int j=0;j<m;j++)
  {
    cin>>w;
    vec1.push_back(w);
  }
  for(int b=0;b<m;b++){
        a=n/2;
  c=0;
  d=n;
  for(int f=0;f<n;f++)
{
    if(vec[0]==vec1[b])
    {
        cout<<1<<endl;
        break;
    }

    if(vec[a]==vec1[b])
    {
        cout<<"equal"<<endl;
        cout<<a+1<<endl;
        break;

    }
    else if(vec1[b]<vec[a])
    {
        if(vec1[b]>vec[a-1])
        {
             cout<<"grater"<<"itterator ="<<f<<endl;
            cout<<a+1<<endl;
            break;

        }
        else
        {
            a=(a-c)/2;
            c=a;
        }
    }
    else if(vec1[b]>vec[a])
    {
        if(vec1[b]<vec[a+1])
        {
             cout<<"less "<<endl;
            cout<<a+2<<endl;
            break;
        }
        else
        {
            a=(d-a)/2;
            d=a;
        }
    }
    cout<<"a , c  d"<<a<<c<<d<<endl;


}
  }

}
