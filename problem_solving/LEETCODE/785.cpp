#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string bi(int o, vector<vector<int>>& g) {
    vector<int> c(g.size(),-1);
    queue<int> q;
    c[o] = 0;
    q.push(o);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        for(int& v : g[at]) {
            if(c[v] == c[at]) return "false";
            else if(c[v] == -1) {
                c[v] = 1-c[at];
                q.push(v);
            }
        }
    }
    return "true";
}

int main() {
    fastio;
    int n,m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    string r = bi(0,g);
    cout << r << endl;
    return 0;
}
