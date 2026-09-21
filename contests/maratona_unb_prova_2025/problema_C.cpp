#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,k;
    cin >> n >> k;
    vector<ll> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector<ll> dp(n+1, 0);
    for(int i = 1 ; i <= n; i++) {
        dp[i] = dp[i - 1];
        int ant = max(0, i - k);
        dp[i] = max(dp[i], a[i] + dp[ant]);
    }
    cout << dp[n] << endl;
    return 0;
}