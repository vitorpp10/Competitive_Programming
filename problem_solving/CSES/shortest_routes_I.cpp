#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18;

vector<ll> dj(int o, int& n, vector<vector<pair<int,int>>>& g) {
    vector<ll> d(n, INF);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    d[o] = 0;
    q.push({0, o});
    while(q.size() > 0) {
        ll w = q.top().first;
        int cw = q.top().second;
        q.pop();
        if(w > d[cw]) continue;
        for(auto& v : g[cw]) {
            int pv = v.first;
            int cv = v.second;
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
    vector<vector<pair<int,int>>> g(n);
    for(int i = 0; i < m; i++) {
        int a,b,c;
        cin >> a >> b >> c, a--,b--;
        g[a].push_back({c,b});
    }
    vector<ll> r = dj(0,n,g);
    for(const ll& rr : r) cout << rr << " ";
    return 0;
}
