//PAREI NO 1150 BEECROWD QUASE TERMINANDO ESTE

#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int x, z;
    cin >> x;
    while (true) {
      cin >> z;
      if (z > x) { break; }
    }
    int s = 0;
    int c = 0;
    for(int i = x; i < z; i++) {
      s += x + i;
      if (s > z) { break; }
      c++;
    }
    cout << c << endl;
    return 0;
}
