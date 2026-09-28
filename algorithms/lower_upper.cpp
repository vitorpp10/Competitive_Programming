#include <algorithm>
#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    while(cin >> n) {
      vector<int> v;
      for (int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;
        for (int i = x; i <= y; i++) {
          v.push_back(i);
        }
      }
      sort(v.begin(), v.end());
      int num;
      cin >> num;
      int pi = lower_bound(v.begin(), v.end(), num) - v.begin();
      int pf = upper_bound(v.begin(), v.end(), num) - v.begin();
      if (pi < v.size() && v[pi] == num) { 
        cout << num << " found from " << pi << " to " << pf-1 << endl; 
      } else { cout << num << " not found" << endl; }
    }
    return 0;
}
