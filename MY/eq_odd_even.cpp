#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, q;
    cin >> n >> q;
    vector<int> pref(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pref[i] = pref[i - 1];
        if((x & 1) == 0) pref[i]++;
        else pref[i]--;
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << endl;
    }
    return 0;
}