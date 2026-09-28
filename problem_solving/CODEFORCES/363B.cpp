#include <bits/stdc++.h>

#define ll long long 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<ll> pref(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        ll h;
        cin >> h;
        pref[i] = pref[i - 1] + h;
    }
    ll small = pref[k] - pref[0];
    int ans = 1;
    for(int l = 2; l + k - 1 <= n; l++) {
        int r = l + k - 1;
        ll sum = pref[r] - pref[l - 1];
        if(sum < small) {
            small = sum;
            ans = l;
        }
    }
    cout << small << endl;
    return 0;
}