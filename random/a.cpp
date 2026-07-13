//1 count cp 
#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int INF = 1e9;

vector<int> dj(int o, vector<vector<pair<int,int>>>& g) {
    vector<int> d(g.size(), INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    d[o] = 0;
    q.push({0, o});
    while(q.size() > 0) {
        int w = q.top().first;
        int cw = q.top().second;
        if(w > d[cw]) continue;
        for(int& v : g[cw]) {
            int pv = v.first;
            int cv = v.second;
            if(d[cv] > d[cw] + pv) {
                d[cv] = d[cw] + pv;
                p[cv] = cw;
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
    vector<vector<pair<int,int>>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l, u--,v--;
        g[v].push_back({l,u});
        g[u].push_back({l,v});
    }
    vector<int> r = dj(0,g);
    if(r[n-1] == -1) cout << "IMPOSSIBLE" << endl;
    else {
        vector<int> rr;
        int t = n-1;
        while(t != -1) {
            rr.push_back(t);
            t = r[t];
        }
        reverse(rr.begin(), rr.end());
        for(const int& rrr : rr) cout << rrr+1 << endl;
    }
    return 0;
}
