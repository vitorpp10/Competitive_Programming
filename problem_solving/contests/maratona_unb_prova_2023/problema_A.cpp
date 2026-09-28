#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18;

vector<ll> dj(int s, vector<vector<pair<int,int>>>& g) {
    vector<ll> d(g.size(), INF);
    using state = pair<ll,ll>;
    priority_queue<state, vector<state>, greater<state>> q;
    d[s] = 0;
    q.push({0,s});
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

vector<int> bfs(int s, vector<vector<int>>& g) {
    vector<int> d(g.size(), -1);
    queue<int> q;
    d[s] = 0;
    q.push(s);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        for(int v : g[at]) {
             if(d[v] == -1) {
                d[v] = d[at] + 1;
                q.push(v);
            }
        }
    }
    return d;
}

int main() {
    fastio;
    //BFS c dj
    int n,m,d; //5, 5, 3
    cin >> n >> m >> d;
    vector<vector<pair<int,int>>> gd(n+1); //CAIXA[CAIXA[UMA, DOIS]] 6
    vector<vector<int>> gb(n+1); //CAIXA[CAIXA] = 6
    for(int i = 0; i < m; i++) { //5
        int u,v,l; //1, 2, 7
        cin >> u >> v >> l;
        gd[u].push_back({l,v}); //gd[1] = {7,2};
        gd[v].push_back({l,u}); //gd[1] = {7,1};
        gb[u].push_back(v); //gb[1] = 2
        gb[v].push_back(u); //gb[2] = 1;
    } 
    vector<ll> rd = dj(1, gd);
    vector<int> rb = bfs(d, gb);
    if(rd[n] < rb[n]) cout << "SIM" << endl;
    else cout << "NAO" << endl;
    return 0;
}
