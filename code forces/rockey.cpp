#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,p,tmp,res,sum=0,i,n,t=0;
string s;
cin>>t;
for(int f=0;f<t;t++){
cin >> a >> b >> p;
		cin >> s;
		n = s.length();
		//cout << n << "\n";
		//int arr[n] = { 0 };
		tmp = res = n - 1;
		for (i = n - 2; i >= 0; --i) {
			if ( i != 0) {
				if (s[i] != s[i - 1]) {
					if (s[i] == 'A') {
						sum += a;
					} else {
						sum += b;
					}
					tmp = res;
					res = i;
				}
			} else {
				if (s[i] == 'A') {
					sum += a;
				} else {
					sum += b;
				}
				tmp = res;
				res = i;
			}
			if (sum > p) {
				res = tmp;
				break;
			}
		}
		cout << ++res << "\n";
		sum = 0;
}
}
