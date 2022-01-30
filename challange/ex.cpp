#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include<bits/stdc++.h>

using namespace std;


int main(){
    string S;
    cin >> S;
    try {
        if(stringstream(S))
        {
            cout<<stringstream(S)<<endl;
        }
        else {
            throw "Bad String";
        }
        
    } catch (string *s) {
        cout<<s<<endl;
    }
    return 0;
}