#include <bits/stdc++.h>

#define ll long long 
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int k,w,n;
    cin >> k >> n >> w;
    ll s = k * (w*(w+1)) / 2;
    cout << max(0LL, s - n) << endl;
    return 0;
}
