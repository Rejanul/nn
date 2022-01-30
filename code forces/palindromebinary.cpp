#include<iostream>
using namespace std;
    int main()
    {
        int test,line,one=0,zero=0,row=0,czero=0,cone=0,needswape=0,cantchange=0,change=0,p=0,palindrome=0;
        int arra[50][2];
        int position[50];
        string binary;
        cin>>test;
        for(int i=0;i<test;i++)
        {
            cin>>line;
            for(int j=0;j<line;j++)
            {
                cin>>binary;
                for(int k=0;k<binary.length();k++)
                {
                    if(binary[k]=='1')
                    {
                        one++;
                    }
                    else if(binary[k]=='0')
                    {
                        zero++;
                    }

                }
                arra[row][0]=one;
                    arra[row][1]=zero;
                     // cout<<"zero from 1st"<<arra[row][1]<<endl;
            //cout<<"one from 1st"<<arra[row][0]<<endl;
                    row++;
                    one=0;
                    zero=0;
            }

        for(int k=0;k<line;k++)
        {
            // cout<<"zero"<<arra[k][1]<<endl;
           // cout<<"one"<<arra[k][0]<<endl;
            czero=arra[k][1]%2;
            cone = arra[k][0]%2;

            if(czero==1&&cone==1)
            {
                needswape++;
               // cout<<needswape<<"need"<<endl;
            }
           else if((czero==1&&cone==0)||(czero==0&&cone==1))
            {

                change++;
               // cout<<change<<"change"<<endl;
            }
            else if(czero==0&&cone==0)
            {
                cantchange++;
              //  cout<<cantchange<<"cantchange"<<endl;
            }
        }
        int f= needswape;
        if(f%2==0)
        {
        palindrome=needswape+change+cantchange;
        }
        else if(f%2 == 1&&change==0)
        {
            palindrome =needswape+cantchange-1;
        }
        else
        {
            palindrome=needswape+change+cantchange;}
        cout<<palindrome<<endl;
        palindrome=0;
         needswape=0;
         change=0;
         cantchange=0;
         row=0;
    }
    }
