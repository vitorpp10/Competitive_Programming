#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
      int n;
      cin >> n;
      bool p = true;
      if (n <= 1) { p = false; }
      for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { p = false; }
      }
      if (p) { cout << "Prime" << endl; } else { cout << "Not Prime" << endl; }
    }
    return 0;
}
