 //vector<int> dp(100, -1);
    //
    //if (n == 0) return 0;
    //if (n == 1) return 1;
    //
    //if(dp[n] != -1) return dp[n] //O(1); 
    //
    //dp[n] = fib(n - 1) + fib(n - 2);
    //return dp[n];
    //
    //n = 5;
    //if (5 == 0)? No, continue;
    //if (5 == 1)? No, continue;
    //
    //dp[5] == -1;
    //if(-1 != -1)? No, continue;
    //
    //-1(dp[n]) = fib(4) + fib(3); 

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
    dpc[1] = 1;
    while(tt--) {
        int n;
        cin >> n;
        int r = fib(n);
        cout << "fib(" << n << ") = " << dpc[n]-1 << " calls = " << r << endl;
    }
    return 0;
}
