#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    string s[11];
    string s1,s2,ss;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
        //cout<<s[i]<<endl;
    } 
    
    for(int k=0;k<t;k++){
        //acout<<k;
        ss=s[k]; 
        s1.clear();
        s2.clear();
    for(int j=0;j<ss.size();j+=2)
    {
       // cout<<ss<<endl;
        
        s1+=ss[j];
        if(j!=(ss.size()-1))
         s2+=ss[j+1];
    }
    cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
