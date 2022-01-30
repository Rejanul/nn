#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

    int t;
    cin >> t;

    while (t--) {

      int n;
      cin >> n;

      if (n % 2 == 1) {
          cout << 7;
          n -= 3;

      }

      for (int i=0; i<n; i+=2) {

          cout << 1;

      }
      cout << "\n";

    }

    return 0;

}
