
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int inf = 1000000005;

int32_t main() {

    int n;
    cin >> n;


    if (n <= 2) {

		cout << n << "\n";

	} else {

		if (n % 2 == 1) {

			cout << n * (n - 1) * (n - 2) << "\n";

		} else {

			if (n % 3 == 0) {

				cout << (n - 1) * (n - 2) * (n - 3) << "\n";

			} else {

				cout << n * (n - 1) * (n - 3) << "\n";

			}

		}

	}

	     return 0;

}
