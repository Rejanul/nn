#include<iostream>
using namespace std;

 void recursion(int i)
    {
        if (i==0)
        {
            return ;
        }
        else{
              recursion(i-1);
                       cout<< i<<endl;
        }

    }
int main()
{
int i=8;
    recursion(i);

}
