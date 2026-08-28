#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int INF = 1e8;

int main() {
    fastio;
    // dijkstra;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
        g[v].push_back({l,u});
    }
    int x;
    cin >> x;
    vector<int> d(g.size(), INF);
    vector<int> p(g.size(), -1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    d[x] = 0;
    q.push({0, x});
    while(q.size() > 0) {
        int w = q.top().first;
        int cw = q.top().second;
        if(w > d[cw]) continue;
        for(auto& v : g[cw]) {
            int pv = v.first;
            int cv = v.second;
            if(d[cv] > d[cw] + pv) {
                d[cv] = d[cw] + pv;
                p[cv] = cw;
                q.push({d[cv], cv});
            }
        }
    }
    if(p[n-1] == -1) cout << -1 << endl;
    else {
        vector<int> r;
        int t = n-1;
        while(t != -1) {
            r.push_back(t);
            t = r[t];
        }
        reverse(r.begin(), r.end());
        for(int i = 0; i < r.size()-1; i++) cout << r[i]+1 << " ";
        cout << r[r.size()-1] << endl;
    }
    return 0;
}