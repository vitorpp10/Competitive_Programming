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
    map<string, string> s;
    for (int i = 0; i < n; i++) {
      string x;
      cin >> x;
      if (s.find(x) != s.end()) {
        s[x] = x + "1";
        cout << s[x] << endl;
      } else { s[x] = "OK"; cout << s[x] << endl; }
    }
    return 0;
}
