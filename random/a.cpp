#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18;

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
    }
    vector<vector<ll>> d(n + 1, vector<ll>(2, INF));
    using state = tuple<ll, int, int>;
    priority_queue<state, vector<state>, greater<state>> q;
    d[0][0] = 0;
    q.push({0, 1, 0});
    while(q.size() > 0) {
        auto [cost, city, coupon] = q.top();
        q.pop();
        if(cost > d[city][coupon]) continue;
        for(auto [kg, neigh] : g[city]) {
            if(d[neigh][coupon] > cost + kg) {
                d[neigh][coupon] = cost + kg;
                q.push({d[neigh][coupon], neigh, coupon});
            }
            if(coupon == 0) {
                if(d[neigh][1] > cost + (kg / 2)) {
                    d[neigh][1] = cost + (kg / 2);
                    q.push({d[neigh][1], neigh, 1});
                }
            }
        }
    }
    cout << d[n][1] << endl;
    return 0;
}
