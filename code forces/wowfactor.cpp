#include<iostream>
using namespace std;
int main()
{
    string s;
    int factor=0,test1=0,v=0;
    cin>>s;
    for(int i=0;i<(s.size()-1);i++)
    {

      if(s[i]=='v'&&s[i+1]=='v')
      {

          for(int j=i+2;j<s.size();j++)
          {
              if(s[j]=='o')
              {
                  for(int k=j+1;k<(s.size()-1);k++)
                  {
                      if(s[k]=='v'&&s[k+1]=='v')
                      {
                        factor++;
                        test1=1;
                      }
                  }
                  break;
              }
          }
      }
    }
    cout<<factor<<endl;
}
