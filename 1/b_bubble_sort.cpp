#include <bits/stdc++.h>
#include <utility>

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
      vector<int> v;
      for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
      }
      int c = 0;
      for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
          if (v[j-1] > v[j]) {
            swap(v[j-1], v[j]);
            c++;
          }
        }
      }
      cout << "Optimal train swapping takes " << c << " swaps." << endl;
    }
    return 0;
}
