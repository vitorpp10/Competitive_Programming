#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, tt;
    cin >> n >> tt;
    vector<ll> v(n + 1, 0);
    for(ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        v[i] = v[i - 1] + x;
    }
    while(tt--) {
        int a, b;
        cin >> a >> b;
        cout << v[b] - v[a - 1] << endl;
    }
    return 0;
}
