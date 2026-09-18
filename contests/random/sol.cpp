#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    for(int k = 3; k--;) {
        //cpx? N E Q: 2*10^5 
        int n,q,c=0;
        cin >> n >> q;
        vector<ll> v(n+1);
        for(ll i = 1; i <= n; i++) cin >> v[i];
        int sum_v = accumulate(v.begin(), v.end(), 0LL);
        for(int i = 0; i < q; i++) {
            int x,y;
            cin >> x >> y;
            if(y > sum_v) c = n;
            else {
                int pi = lower_bound(v.begin(), v.end(), x) - v.begin();
                int pf = upper_bound(v.begin(), v.end(), y) - v.begin();
                
            }
            cout << c << endl;
        }
    }
    return 0;
}