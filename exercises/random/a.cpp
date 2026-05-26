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
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (s.size() > 10) {
        cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
      } else { cout << s << endl; }
    }
    return 0;
}
