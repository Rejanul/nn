#include<bits/stdc++.h>
using namespace std;
int binary[1000000];


int main()
{
    double a,b,c,r1;
    int r;
    cout<<"Enter 1 for add, 2 for minus, 3 for multiply and 4 for division: "<<endl;
    cin >> r;
    cout << "Enter two numbers: " << endl;
    cin >> a>> b;

    switch (r) {
        case 1:
            cout << a << " + " <<b << " = " << a + b;
            break;
        case 2:
            cout << b << " - " << b<< " = " << a - b;
            break;
        case 3:
            cout << b << " * " << b << " = " << a * b;
            break;
        case 4:
            cout << b << " / " << b << " = " << a / b;
            break;


        default:
            // operator is not matched (1,2,3,4)
            cout << "Error! read carefully and enter again";
            break;
    }

    return 0;
}



