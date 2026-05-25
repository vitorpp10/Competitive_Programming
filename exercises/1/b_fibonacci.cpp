#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int an = 0;
    int at = 1;
    cout << an;
    for (int i = 2; i <= n; i++) {
      int p = an + at;
      cout << " " << at;
      an = at;
      at = p;
    }
    cout << endl;
    return 0;
}
