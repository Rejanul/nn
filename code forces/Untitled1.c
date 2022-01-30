#include<bits/stdc++.h>

using namespace std;

void Next_Func_P(char ch);

void Func_P(char ch, int P);

void Func_Q(char ch, int q);

void Next_Func_Q(char ch);

void Func_R(char ch, int r);

void Next_Func_R(char ch);

int main(){


char ch;

int a=0; for(;;){

cout<<endl<<endl<<"Enter the state "<<endl; cin>>ch;


if(ch=='p'){     cout<<"Epsilon clousre of the state "<<ch<<"are ";
    Func_P(ch, a);
}

else if(ch=='q'){     cout<<"Epsilon clousre of the state "<<ch<<"are ";
    Func_Q(ch, a);
}

else if(ch=='r'){     cout<<"Epsilon clousre of the state "<<ch<<"are ";
    Func_R(ch, a);
}

else
 {
    cout<<"Wrong state.Enter right state "<<endl;
}


if(ch=='s')     break;
}
return 0;

}

void Func_P(char ch, int P){

if(ch=='p'){       int e=0;     cout<<"p ";

    if(P==e)
    Next_Func_P(ch);
}

}

void Next_Func_P(char ch){

if(ch=='p')     cout<<"r q";

}

void Func_Q(char ch, int q){

cout<<"q";

int e=1;
if(q==e)
    Next_Func_Q(ch);

}

void Next_Func_Q(char ch){

cout<<"p r"<<endl;
}

void Func_R(char ch, int r){

cout<<"r";

int e=1;

if(e==r){
    Next_Func_R( ch);
}

}

void Next_Func_R(char ch){

cout<<"p r";
}


