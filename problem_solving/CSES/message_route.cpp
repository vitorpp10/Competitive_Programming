#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> bfs(int o, int& n, vector<vector<int>>& g) {
    queue<int> q;
    vector<int> p(n, -1);
    vector<bool> vis(n, false);
    vis[o] = true;
    q.push(o);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        for(int& att : g[at]) {
            if(!vis[att]) {
                vis[att] = true;
                p[att] = at;
                q.push(att);
            }
        }
    }
    return p;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b,a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> r = bfs(0,n,g);
    if(r[n-1] == -1) cout << "IMPOSSIBLE" << endl;
    else {
        vector<int> rr;
        int t = n-1;
        while(t != -1) {
            rr.push_back(t);
            t = r[t];
        }
        cout << rr.size() << endl;
        reverse(rr.begin(), rr.end());
        for(const int& rrr : rr) cout << rrr+1 << " ";
    }
    return 0;
}
