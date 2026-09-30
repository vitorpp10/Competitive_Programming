#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int k, n, w;
    cin >> k >> n >> w;
    for(int i = 0; i <= w; i++) n -= k * i;
    if(n >= 0) cout << 0 << endl;
    else cout << abs(n) << endl;
    return 0;
}