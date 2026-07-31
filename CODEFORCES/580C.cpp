#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<vector<int>> g;
vector<int> gt;
int limit;
int resp = 0;

void dfs(int u, int p, int m) {
    if(gt[u] == 1) m++; else m = 0;
    if(m > limit) return;
    if(u != 1 && g[u].size() == 1) {
        resp++;
        return;
    }
    for(int& v : g[u])
        if(v != p)
            dfs(v, u, m);
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    limit = m;
    g.resize(n+1);
    gt.resize(n+1);
    for(int i = 1; i <= n; i++) cin >> gt[i];
    for(int i = 0; i < n-1; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0,0);
    cout << resp << endl;
    return 0;
}
