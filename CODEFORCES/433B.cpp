#include <bits/stdc++.h>

#define ll long long 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,m;
    cin >> n;
    vector<ll> pref(n + 1, 0);
    vector<ll> pref_order(n + 1, 0);
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        v[i] = x;
        pref[i] = pref[i - 1] + x;
    }
    sort(v.begin() + 1, v.end());
    for(int i = 1; i <= n; i++) pref_order[i] = pref_order[i - 1] + v[i];
    cin >> m;
    while(m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if(type == 1) cout << pref[r] - pref[l - 1] << endl;
        else cout << pref_order[r] - pref_order[l - 1] << endl;
    }
    return 0;
}