#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int INF = 1e9;

vector<int> dij(int o, vector<vector<pair<int,int>>>& g) {
    vector<int> d(g.size(), INF);
    using state = pair<int,int>;
    priority_queue<state, vector<state>, greater<state>> q;
    d[o] = 0;
    q.push({0, o});
    while(q.size() > 0) {
        auto [w, cw] = q.top();
        q.pop();
        if(w > d[cw]) continue;
        for(auto [pv, cv] : g[cw]) {
            if(d[cv] > d[cw] + pv) {
                d[cv] = d[cw] + pv;
                q.push({d[cv], cv});
            }
        }
    }
    return d;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int a,b,d;
        cin >> a >> b >> d;
        g[a].push_back({d,b});
        g[b].push_back({d,a});
    }
    vector<int> d1 = dij(1,g);
    vector<int> d2 = dij(n, g);
    int ans = 0;
    for(int i = 1; i <= n; i++) ans = max(ans, d1[i] + d2[i]);
    cout << ans << endl;
    return 0;
}