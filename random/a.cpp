#include <bits/stdc++.h>

#define ll long long
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
      int p,m,x;
      cin >> p >> m >> x;
      cout << min({p,m,((p+m+x)/3)}) << endl;
    }
    return 0;
}
