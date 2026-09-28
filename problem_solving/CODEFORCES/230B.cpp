#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int tt;
    cin >> tt;
    while(tt--) {
        ll n, ns;
        bool t = true;
        cin >> n;
        ns = round(sqrt(n));
        if(ns > 1) {
            for(ll i = 2; i * i <= ns; i++) 
                if(ns % i == 0) t = false;
            if(ns * ns == n && t) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}
