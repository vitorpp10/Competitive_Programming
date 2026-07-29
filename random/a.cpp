#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string ch(int o, int& n, vector<vector<int>>& g) {
    queue<int> q;
    vector<bool> t(g.size(), false);
    int c = 0;
    t[o] = true;
    q.push(o);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        c++;
        for(int& v : g[at]) {
            if(!t[v]) {
                t[v] = true;
                q.push(v);
            }
        }
    }
    if(c == n) return "FHTAGN!";
    else return "NO";
}

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
    if(n != m || n < 3) cout << "NO" << endl;
    else {
        string r = ch(0,n,g);
        cout << r << endl;
    }
    return 0;
}
