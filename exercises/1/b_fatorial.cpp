#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, f=1;
    cin >> n;
    for (int i = n; i > 0; i--) {
      f *= i;
    }
      cout << f << endl;
    return 0;
}
