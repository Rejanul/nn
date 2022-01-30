#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> phn;
    int num,t;
    string s,ss;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s>>num;
        phn.insert({s,num});
    }
  /*  for(map<string,int>::const_iterator it=phn.begin();it!=phn.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    cin>>ss;
    map<string,int>::const_iterator it = phn.find(ss);
    if(it==phn.end())
    {
        cout<<"Not found"<<endl;
        return 0;
    }

    cout<<it->first<<"="<<it->second<<endl;
    
}