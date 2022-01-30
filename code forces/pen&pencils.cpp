#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int k,a,b,c,d,pen,pencil,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d>>k;
        pen=ceil(a/(c*1.0));
        pencil= ceil(b/(d*1.0));
        if(k>=(pen+pencil))
        {
            cout<<pen<<" "<<pencil<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
