#include<bits/stdc++.h>

using namespace std;

int b = 0;
int a = 0;

int factor(int num){


    int t = 2;
    while(1){
        if(num%t==0 && t != sqrt(num)){
            return t;
        }

        t++;
        if (t == sqrt(num))
            break;

    }
return num;

}

int factor2(int num){


    int t = 2;
    while(1){
        if(num%t==0 && t!=a && t != sqrt(num) && num/t != a){
            return t;
        }
         t++;
        if (t == sqrt(num))
            break;

    }
return num;

}
//
//bool is_prime(long long n){
//
//long long  root = sqrt(n);
//
//bool check = true;
//
//if(n==2)
//    return  check;
//
//for(int i=2; i<=root+1; i++){
//
//    if(n%i==0){
//        check=false;
//        //return check;
//    }
//}
//return check;
//
//}

int main()
{

    int query;

    cin>>query;

    while(query--){

        int num;

        cin>>num;

//        if(is_prime(num)){
//            cout<<"NO"<<endl;
//        }

        //else


         a = factor(num);
        if (a == num) {
            cout << "NO" << endl;
            continue;
        }
        int num2 = num;

         num/=a;

        //cout<<"a "<<a<<endl;

         b = factor2(num);


//
//        if(b==a)
//        {
//              b = factor2(num);
//
//           cout<<"b "<<b<<endl;
//
//            int c = num2/(a*b);
//
//            cout<<"c "<<c<<endl;
//
//            if(a!=c && b!=c && c>1 && a*b*c==num2){
//                cout<<"YES"<<endl;
//                cout<<a<<" "<<b<<" "<<c<<endl;
//            }
//            else
//                cout<<"NO"<<endl;
//        }

        //else
        //{
        if (b != num) {
            //cout<<"b "<<b<<endl;
            int c = num/b;
             //cout<<"c "<<c<<endl;

            //if(a!=c && b!=c && c>1 && a*b*c==num2){
                cout<<"YES"<<endl;
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
            //}
            else
                cout<<"NO"<<endl;
        //}



    }



    return 0;
}
