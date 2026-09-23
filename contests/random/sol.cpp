#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool dfs(int at, vector<int>& c, vector<vector<int>>& g) {
    for(int& v : g[at]) {
        if(c[v] == 0) {
            c[v] = 3 - c[at];
            if(!dfs(v, c, g)) return false;
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
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> c(g.size(), 0);
    bool ok = true;
    for(int i = 1; i <= n; i++) {
        if(c[i] == 0) {
            c[i] = 1;
            if(!dfs(i, c, g)) ok = false;
        }
    }
    if(ok) {
        for(int i = 1; i <= n; i++) cout << c[i] << " ";
        cout << endl;
    } else cout << "IMPOSSIBLE" << endl;
    return 0;
}