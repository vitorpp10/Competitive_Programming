#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    vector<int> v(20);
    for (int i = 0; i < v.size(); i++) {
      int n;
      cin >> n;
      v[i] = n;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
      cout << "N[" << i << "] = " << v[i] << endl;
    }
    return 0;
}
