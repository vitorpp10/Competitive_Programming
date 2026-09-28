#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    string s = "NO";
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) {
      if(v[v[v[i]]] == i) {
        s = "YES";
        break;
      }
    }
    cout << s << endl;
    return 0;
}
