#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool bipartite(int at, vector<vector<int>>& g, vector<int>& c) {
    for(int& v : g[at]) {
        if(c[v] == -1) {
            c[v] = 1 - c[at];
            if(!bipartite(v, g, c)) return false;
        } else if(c[v] == c[at]) return false;
    }
    return true;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> c(g.size(), -1);
    bool ok = true;
    for(int i = 1; i <= n; i++) {
        if(c[i] == -1) {
            c[i] = 0;
            if(!bipartite(i, g, c)) {
                ok = false;
                break;
            }
        }
    }
    if(ok) {
        for(int i = 1; i <= n; i++) cout << c[i]+1 << " ";
        cout << endl;
    } else cout << "IMPOSSIBLE" << endl;
    return 0;
}
