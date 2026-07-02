#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18; //limits of question

vector<int> dijkstra(int o, int& n, vector<vector<pair<int,int>>>& g) {
    vector<ll> d(n, INF);
    vector<int> p(n, -1);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    d[o] = 0;
    q.push({0, o});
    while(!q.empty()) {
        ll w = q.top().first;
        int cw = q.top().second;
        q.pop();
        if(w > d[cw]) continue;
        for(auto& v : g[cw]) {
            int pv = v.first;
            int cv = v.second;
            if(d[cv] > d[cw] + pv) {
                d[cv] = d[cw] + pv;
                p[cw] = o;
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
    vector<vector<pair<int,int>>> g(n);
    for(int i = 0; i < m; i++) { 
        //a=orign, b=destiny, c=weight
        int a, b, c;
        cin >> a >> b >> c, a--, b--; //a-- and b-- to increase 0 to 1 
        g[a].push_back({c,b});
        g[a].push_back({c,a});
    }
    vector<int> r = dijkstra(0,n,g);
    if(r[n-1] == -1) cout << -1 << endl; 
    else {
        vector<int> rr;
        int t = n -1;
        while(t != -1) {
            rr.push_back(t);
            t = r[t];
        }
        //rrr+1 because questions requires 1 + n;
        for(const auto& rrr : rr) cout << rrr+1 << " ";
    }
    return 0;
}
