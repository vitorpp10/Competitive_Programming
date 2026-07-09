#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> bfs(int& a, vector<vector<int>>& g) {
    queue<int> q;
    vector<int> d(g.size(), -1);
    vector<bool> t(g.size(), false);
    t[a]= true;
    q.push(a);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        for(int& v : g[at]) {
            if(!t[v]) {
                t[v] = true;
                d[v] = at;
                q.push(v);
            }
        }
    }
    return d;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int a,b;
    cin >> a >> b;
    vector<int> r = bfs(a,g);
    if(r[b] == -1) cout << "f" << endl;
    else {
        vector<int> rr;
        int t = b;
        while(t != -1) {
            rr.push_back(t);
            t = r[t];
        }
        cout << rr.size()-1 << endl;
    }
    return 0;
}
