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
    cin >> n;
    vector<int> ct(n+1);
    vector<int> dp(n+1);
    for(int i = 1; i <= n; i++) cin >> ct[i];
    dp[1] = 0;
    dp[2] = abs(ct[2] - ct[1]);
    for(int i = 3; i <= n ; i++) {
        int p1 = dp[i-1] + abs(ct[i] - ct[i - 1]);
        int p2 = dp[i-2] + abs(ct[i] - ct[i - 2]); 
        dp[i] = min(p1, p2);
    }
    cout << dp[n] << endl;
    return 0;
}
