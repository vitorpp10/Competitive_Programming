#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    while(q--) {
        int l,r;
        cin >> l >> r;
        int pi = lower_bound(v.begin(), v.end(), l) - v.begin();
        int pf = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout << pf - pi << endl;
    }
    return 0;
}