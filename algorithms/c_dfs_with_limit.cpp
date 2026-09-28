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
int r = 0;

void dfs(int u, int p, int m) {
    if(gt[u] == 1) m++; else m = 0; //if in this path have cats(1), count(m)++ else reset count to 0 
    if(m > limit) return; //if count(m) > limit of count = stop run this path attempt
    if(u != 1 && g[u].size() == 1) { //if the node != 1, i.e., if this node isn't the start node and node size == 1, i.e., only have one neighbors, found restaurant without limit of cats, r(restaurant)++ and stop this run pasth(return)
        r++;
        return;
    }
    for(auto& v : g[u]) 
        if(v != p) dfs(v, u, m);
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    g.resize(n);
    gt.resize(n);
    limit = m;
    for(int i = 1; i <= n; i++) cin >> gt[i]; //create path where can have or not cats, the given limits of cats is the variable "limit"; 
    for(int i = 0; i < n-1; i++) { //loop to increase the connections of graphys, in this case edges 
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0,0);
    cout << r << endl;
    return 0;
}
