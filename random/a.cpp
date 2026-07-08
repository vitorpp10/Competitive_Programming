#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string fh(int o, vector<vector<int>>& g) {
    vector<int> vi(g.size());
    queue<int> q;
    vi[o] = 0;
    q.push(o);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        vi[at]++;
        
    }
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    if(n!=m) cout << "NO" << endl;
    else {
        vector<vector<int>> g(n);
        for(int i = 0; i < m; i++) {
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        string r = fh(0,g);
        cout << r << endl;
    }
    return 0;
}
