#include<iostream>
using namespace std;
int main()
{
    string s,t;
    int n,vowel=0,vowel1=0,consonent=0,consonent1=0;
    cin>>s>>t;
    n=s.size();
   if(s.size()!=t.size())
    {
       cout<<"no"<<endl;
       return 0;
    }
    for(int i=0;i<n;i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
        {
            vowel++;
        }
        else
            consonent++;
        if((t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'))
        {
            vowel1++;
        }
        else
            consonent1++;
        if((vowel!=vowel1)&&(consonent!=consonent1))
        {
            cout<<"no"<<endl;

            return 0;
        }

    }
    cout<<"yes"<<endl;

}
