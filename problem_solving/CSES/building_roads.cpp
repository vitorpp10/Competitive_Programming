#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v, u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> r;
    vector<int> d(g.size(), -1);
    for(int i = 0; i < n; i++) {
        if(d[i] == -1) {
            r.push_back(i);
            d[i] = 1;
            queue<int> q;
            q.push(i);
            while(q.size() > 0) {
                int at = q.front();
                q.pop();
                for(int& v : g[at]) {
                    if(d[v] == -1) {
                        d[v] = 1;
                        q.push(v);
                    }
                }
            }
        }
    }
    cout << r.size()-1 << endl;
    for(int i = 1; i < r.size(); i++) cout << r[0]+1 << " " << r[i]+1 << endl;
    return 0;
}
