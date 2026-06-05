#include <bits/stdc++.h>
#include <queue>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    while(cin >> n && n != 0) {
      queue<int> q;
      vector<int> v;
      for (int i = 1; i <= n; i++) { q.push(i); }
      while (q.size() != 1) {
        int a = q.front();
        v.push_back(a);
        q.pop();
        int b = q.front();
        q.push(b);
        q.pop();
      }
      cout << "Discarded cards: ";
      for (int i = 0; i < v.size()-1; i++) {cout << v[i] << ", ";}
      for (int i = v.size()-1; i > 0; i--) { cout << v[i];  break; }
      cout << endl << "Remaining card: ";
      int r = q.front();
      cout << r << endl;
    }
    return 0;
}
