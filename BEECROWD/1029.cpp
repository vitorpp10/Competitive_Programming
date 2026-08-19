#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> dp(100, -1);
vector<int> dpc(100, -1);

int fib(int n) {
    if(n == 0) return n;
    if(n == 1) return n;
    if(dp[n] != -1) return dp[n];
    dp[n] = fib(n - 1) + fib(n - 2);
    dpc[n] = dpc[n - 1] + dpc[n - 2] + 1; 
    return dp[n];
}

int main() {
    fastio;
    int tt;
    cin >> tt;
    dpc[0] = 1;
    dpc[1] = 0;
    while(tt--) {
        int n;
        cin >> n;
        int r = fib(n);
        cout << "fib(" << n << ") = " << dpc[n]-1 << " calls = " << r << endl; 
    }
    return 0;
}
