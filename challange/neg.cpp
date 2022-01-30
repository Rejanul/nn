#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     double result=0;
     for(double i=0;i<5;i++)
     {
         result+=pow(0.66666,i)*0.3333333;
     }
     cout<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}
