#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
  fastio;
  int n, k;
  while (cin >> n >> k && (n != 0 || k != 0)) {
    stack<int> s;
    bool b = true;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      while (!s.empty() && s.top() <= x) {
        s.pop();
      }
      if (!s.empty() && y > s.top()) {
        b = false;
      }
      s.push(y);
      if (s.size() > k) {
        b = false;
      }
    }
    if (b == true) {
      cout << "Sim" << endl;
    } else {
      cout << "Nao" << endl;
    }
  }
  return 0;
}
