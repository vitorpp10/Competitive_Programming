#include <bits/stdc++.h>

#define ll long long

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int t, co = 0, tt = 0;
    cin >> t;
    vector<int> c;
    for (int i = 0; i < t; i++) {
      int n;
      cin >> n;
      tt += n;
      c.push_back(n);
    }
    sort(c.begin(), c.end(), greater<int>());
    int m = 0;
    for (int i = 0; i < t; i++) {
      m += c[i];
      c.erase(c.begin() + i); 
      co++;
      if (m > (tt - m)) { break; }
    }
    cout << co << endl;
    return 0;
}
