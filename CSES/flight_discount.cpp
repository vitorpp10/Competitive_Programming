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
    vector<vector<pair<int,int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
    }
    vector<vector<ll>> d(g.size(), vector<ll>(2, INF));
    priority_queue<pair<ll, pair<int, int>>, vector<pair<ll, pair<int, int>>>, greater<pair<ll, pair<int, int>>>> q;
    d[1][0] = 0;
    q.push({0, {1, 0}});
    while(q.size() > 0) {
        ll w = q.top().first;
        int cw = q.top().second.first;
        int usou = q.top().second.second;
        q.pop();
        if(w > d[cw][usou]) continue;
        for(auto& v : g[cw]) {
            int pv = v.first;
            int cv = v.second;
            if(usou == 0) {
                if(d[cv][0] > d[cw][0] + pv) {
                    d[cv][0] = d[cw][0] + pv;
                    q.push({d[cv][0], {cv, 0}});
                }
                if(d[cv][1] > d[cw][0] + (pv / 2)) {
                    d[cv][1] = d[cw][0] + (pv / 2);
                    q.push({d[cv][1], {cv, 1}});
                }
            } else {
                if(d[cv][1] > d[cw][1] + pv) {
                    d[cv][1] = d[cw][1] + pv;
                    q.push({d[cv][1], {cv, 1}});
                }
            }
        }
    }
    cout << d[n][1] << endl;
    return 0;
}
