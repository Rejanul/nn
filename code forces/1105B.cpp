#include<iostream>
using namespace std;
int main()
{
    bool x;
    int s,k,counter=1,n=0,arra[26][2],l=0,counter1=0,big=0,large=0,j1=0,tester=0,condition=0;
    cin>>s>>k;
    string ss;
    cin>>ss;
            if(k==1)
                {
                    for(int f=0;f<s;f++)
                    {
                    x=true;
                    if(tester==s)
                    {
                        break;
                    }

                    if((ss[j1]==ss[f]))
                    {   tester++;
                        large++;
                        //cout<<"in first cindition"<<endl;
                        if(large==s)
                    {   //cout<<"fullfill 1st"<<endl;
                        cout<<large<<endl;
                        return 0;
                    }
                    }


                     if((ss[j1]!=ss[f])||(tester==s))
                    {
                         //cout<<"enter in else"<<endl;
                        counter++;
                        if(counter!=2)
                        {
                            //cout<<"enter for check"<<endl;
                            for(int g=0;g<l;g++)
                            {
                                if(ss[j1]==ss[arra[g][0]])
                                {
                                    arra[g][1]=arra[g][1]+large;
                                    large=0;
                                    j1=f;
                                    f--;
                                    //cout<<arra[g][0]<<"    "<<arra[g][1]<<"  "<<j1<<endl;
                                    x=false;
                                    break;
                                }
                            }
                        }
                        if(x==true){
                        arra[l][0]=j1;
                        arra[l][1]=large;
                         //cout<<arra[l][0]<<"    "<<arra[l][1]<<"  "<<j1<<endl;
                        l++;
                        j1=f;
                       // cout<<j1<<endl;
                        f--;

                        large=0;
                        }
                    }}
                   // cout<<"value of l"<<l<<endl;
              if(l==1)
        {
            cout<<arra[0][1]<<endl;
        }
        else
        {
        for(int k=0;k<(l);k++)
        {
           if(big<=arra[k][1])
           {
               big=arra[k][1];
           }
        }
        cout<<big<<endl;}
    }



    //for large




            else{
            for(int j=1;j<s;j++)
            {

                if(ss[j-1]==ss[j])
                {

                    counter++;
                    if(counter==k)
                    { condition=1;
                    cout<<"enter in condition reach to "<<j<<endl;
                        x=true;
                        counter1++;
                        if(counter1!=1){
                        for(int i=0;i<l;i++)
                        {
                            if(ss[arra[i][0]]==ss[j])
                            {
                                arra[i][1]++;
                                counter=1;
                                x=false;
                               // cout<<"in if"<<arra[i][0]<<"     "<<arra[i][1]<<endl;
                               j++;
                                break;
                            }
                        }}
                        if(x==true){
                            cout<<"enter 1st arra reach to "<<j<<endl;
                        arra[l][0]=j;
                        arra[l][1]=1;
                        // cout<<arra[l][0]<<"     "<<arra[l][1]<<endl;
                        l++;
                        counter=1;
                        j++;
                        cout<<"enter 1st arra reach to "<<arra[l-1][0]<<"reset counter to 1 j become"<<j<<"l become"<<l<<endl;
                        }


                    }
                }
                else
                {
                    cout<<"not matched in "<<j<<endl;
                    counter=1;
                }
        }
        if(l==1)
        {
            cout<<arra[0][1]<<endl;
        }
        else if(condition=0)
        {
            cout<<"0"<<endl;
        }
        else
        {
        for(int k=0;k<(l);k++)
        {
           if(big<=arra[k][1])
           {
               big=arra[k][1];
           }
        }
        cout<<big<<endl;}
            }

}
