#include<iostream>
#include<cmath>
using namespace std;
int counter=0,c=1,g=1,num2=0,j=0,k=0,detector=0,lol=0;

int sum(int counter,int j,int num2,int g,double num[],string equation,int i)
{
                for(int f=j-1;f>=j-counter;f--)
                {
                    num2=num2+abs (num[f]*g);
                    g=g*10;
                }
                if(equation[i-counter-1]=='-')
                {
                    num2=num2*(-1);
                    cout<<"check"<<endl;
                }
                cout<<num2;
                num[j-counter]=num2;
                cout<<"from funtion"<<num[j-counter]<<endl;


}
double solve(char operators[],double num[],int n)
{
    int bracket=0,o=0,no=0;
    char boperator[n/2];
    double number[n];
for(int lo=0;lo<k;lo++)
{


    ///bracket
    if(operators[lo]=='(')
    {  bracket=lo+1;
       while(operators[bracket]!=')')
       {
           boperator[o]=operators[bracket];
           number[no]=num[bracket-1];
           o++;
           no++;
           bracket++;
       }
       number[no]=num[bracket];

         double ret=solve(boperator,number,n);
         for(int f=lo;f<=bracket;f++)
         {
             num[f]=ret;
         }
         cout<<"from bracket"<<endl;
                for(int h=0;h<j;h++)
{

    cout<<num[h]<<"  ";
}
cout<<endl;
    }
    }
for(int lo=0;lo<k;lo++)
{


    ///DIVITION
    if(operators[lo]=='/')
    {   cout<<"value of lo "<<lo<<endl;
        double so=num[lo]/num[lo+1];
        num[lo]=so;
        num[lo+1]=so;
        for(int c=lo;c>=0;c--)
        {
            if(operators[c]=='/')
            {
                num[c]=so;
            }
            else
            {
                break;
            }
        }
        cout<<"from /"<<endl;
        for(int h=0;h<j;h++)
{

    cout<<num[h]<<"  ";
}
cout<<endl;
    }}
    ///MULTIPLICATION


for(int lo=0;lo<k;lo++){
    if(operators[lo]=='*')
    {
        double so=num[lo]*num[lo+1];
        num[lo]=so;
        num[lo+1]=so;
        for(int c=lo;c>=0;c--)
        {
            if(operators[c]=='/'||operators[c]=='*')
            {
                num[c]=so;
            }
            else
            {
                break;
            }

        }
         for(int c=lo+1;c<k;c++)
        {
            if(operators[c]=='/')
            {
                num[c]=so;
                num[c+1]=so;
            }
            else
            {
                break;
            }
        }
        cout<<"from *"<<endl;
         for(int h=0;h<j;h++)
{

    cout<<num[h]<<"  ";
}
cout<<endl;
    }}

    ///PLUS

    for(int lo=0;lo<k;lo++){
   if(operators[lo]=='+')
    {
        double so=num[lo]+num[lo+1];
        num[lo]=so;
        num[lo+1]=so;
        for(int c=lo;c>=0;c--)
        {
            if(operators[c]=='+'||operators[c]=='*'||operators[c]=='/')
            {
                num[c]=so;
            }
            else
            {
                break;
            }
        }
         for(int c=lo+1;c<k;c++)
        {
            if(operators[c]=='*'||operators[c]=='/')
            {
                num[c]=so;
                num[c+1]=so;
            }
            else
            {
                break;
            }
        }
        cout<<"from +"<<endl;
         for(int h=0;h<j;h++)
{
    cout<<num[h]<<"  ";
}
cout<<endl;
    }}


    ///MINUS

    for(int lo=0;lo<k;lo++){
   if(operators[lo]=='-')
    {
        double so=num[lo]+num[lo+1];
        num[lo]=so;
        num[lo+1]=so;
        for(int c=lo;c>=0;c--)
        {
            if(operators[c]=='+'||operators[c]=='*'||operators[c]=='/'||operators[c]=='-')
            {
                num[c]=so;
            }
            else
            {
                break;
            }
        }
        for(int c=lo+1;c<k;c++)
        {
            if(operators[c]=='+'||operators[c]=='*'||operators[c]=='/')
            {
                num[c]=so;
                num[c+1]=so;
            }
            else
            {
                break;
            }
        }
        cout<<"from -"<<endl;
         for(int h=0;h<j;h++)
{
    cout<<num[h]<<"  ";
}
cout<<endl;
    }
    }
    double y=num[1];
    return y;
}
int main()
{
    string equation;
    cin>>equation;
    int n=equation.size();
    char operators[n/2];
    double num[n];
///SEPARATION OF EQUATION
if(equation[0]=='-')
{
    detector=1;
}

    for(int i=0;i<n;i++)
    {
        if(equation[i]=='+'||equation[i]=='-'||equation[i]=='*'||equation[i]=='/'||equation[i]=='('||equation[i]==')')
        {
            if(counter>1)
            {
                  sum(counter,j,num2,g,num,equation,i);
               j=j-counter+1;
               num2=0;
               g=1;

            }

             counter=0;

           if(detector!=1||i!=0)
           {
              operators[k]=equation[i];
               k++;
           }
            cout<<operators[k]<<endl;

        }

        else
        {


            num[j]=equation[i]-'0';
            if(equation[i-1]=='-')
            {
                num[j]=num[j]*(-1);
            }

            cout<<num[j]<<endl;
            j++;
            counter++;
        }

}

     if(counter>1)
        {
            sum(counter,j,num2,g,num,equation,n);
             j=j-counter+1;
       }
for(int d=0;d<k;d++)
{
    cout<<operators[d]<<"  ";
}
cout<<endl;
for(int h=0;h<j;h++)
{
    cout<<num[h]<<"  ";
}
cout<<endl;
cout<<k<<endl;
/// SOLVING PART

double f=solve(operators,num,n);
cout<<"solution"<<f<<endl;

}



