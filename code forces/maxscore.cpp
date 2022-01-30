#include<iostream>
using namespace std;
int main()
{
    int stu,tl=0,q;
    int num[1000];
    int ques[1000];;
    string stu_1,stu_2;
    cin>>stu>>q;
    cin>>stu_1;
    //int n=stu_1.size();
    for(int m=0;m<q;m++)
    {
        ques[m]=1;
    }
    for(int i=0;i<stu-1;i++)
    {
        cin>>stu_2;
        for(int j=0;j<q;j++)
        {
          if(stu_1[j]==stu_2[j])
          {
              ques[j]=ques[j]+1;
          }
        }
    }

    for(int f=0;f<q;f++)
    {
        cin>>num[f];
    }

    for(int k=0;k<q;k++)
    {
        tl=tl+(ques[k]*num[k]);
    }
    cout<<tl<<endl;
}
