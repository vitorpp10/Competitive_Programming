#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> bfs(int o, vector<vector<int>>& g) {
    vector<int> p(g.size(), -1);
    p[o] = o;
    queue<int> q;
    q.push(o);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        for(int v : g[at]) {
            if(p[v] == -1) {
                p[v] = at;
                q.push(v);
            }
        }
    }
    return p;
}

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> r = bfs(1, g);
    if(r[n] == -1) cout << "IMPOSSIBLE" << endl;
    else {
        vector<int> rr;
        int at = n;
        while(at != -1) {
            rr.push_back(at);
            at = r[at];
        }
        reverse(rr.begin(), rr.end());
        cout << rr.size() << endl;
        for(int i = 1; i <= n; i++) cout << rr[i] << " ";
        cout << endl;
    }
    return 0;
}