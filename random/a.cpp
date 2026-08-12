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
    int n,m,c=0;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
        g[v].push_back({l,u});
    }
    vector<ll> d(g.size(), INF);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    d[1] = 0;
    q.push({0, 1});
    while(q.size() > 0) {
        ll w = q.top().first;
        int cw = q.top().second;
        if(w > d[cw]) continue;
        for(auto& v : g[cw]) {
            int pv = v.first;
            int cv = v.second;
            if(d[cv] > d[cw] + pv) {
                d[cv] = d[cw] + pv;
                q.push({d[cv], cv});
                c += d[cv];
            }
        }
    }
    cout << c << endl;
    return 0;
}
