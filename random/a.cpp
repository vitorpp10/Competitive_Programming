#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18;

vector<int> dj(int o, vector<vector<pair<int,int>>>& g) {
    vector<ll> d(g.size(), INF);
    vector<int> p(g.size(), -1);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    d[o] = 0;
    q.push({0, o});
    while(!q.empty()) {
        auto [w, cw] = q.top();
        q.pop();
        if(w > d[cw]) continue;
        for(auto [v, cv] : g[cw]) {
            if(d[cv] > d[cw] + v) {
                d[cv] = d[cw] + v; 
                p[cv] = cw;
                q.push({d[cv], cv});
            }
        }
    }
    return p;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
        g[u].push_back({l,u});
    }
    vector<int> r = dj(0, g);
    if(r[n] == -1) cout << "IMPOSSIBLE" << endl;
    else {
        vector<int> rr;
        int t = n;
        while(t != -1) {
            rr.push_back(t);
            t = r[t];
        }
        reverse(rr.begin(), rr.end());
        for(int& rrr : rr) cout << rrr << endl;
    }
    return 0;
}
