#include<iostream>
using namespace std;
int main()
{
    bool les=true,up=true;
    int pillers,big=0,position=0;
    cin>>pillers;
    int arra[pillers];
    for(int i=0;i<pillers;i++)
    {
        cin>>arra[i];
        if(big<=arra[i])
        {
            big=arra[i];
            position=i;
        }
    }
    if(arra[0]!=big){
    for(int f=position-1;f>=0;f--)
    {
        if(arra[f]>arra[f+1])
        {
            les=false;
            break;
        }
        else les=true;
    }}
    if(arra[pillers]!=big){
    for(int c=position+1;c<pillers;c++)
    {
         if(arra[c]>arra[c-1])
        {
            up=false;
            break;
        }
        else up=true;
    }}
    if(up==true&&les==true)
    {
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;

}
