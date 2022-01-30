#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int que,planks,s=0,remaining=0,m_lim=0,st=0;
    int arra[100000];
    cin>>que;
    for(int i=0;i<que;i++)
    {
        cin>>planks;
        for(int j=0;j<planks;j++)
        {
            cin>>arra[j];
        }
         sort(arra,arra+planks);
         st=arra[planks-2];
         m_lim=arra[planks-2]-1;
         remaining=planks-2;

    if(remaining>=m_lim)
    {
        cout<<m_lim<<endl;
    }
    else if(remaining<m_lim)
    {
        cout<<remaining<<endl;
    }
    }

}
