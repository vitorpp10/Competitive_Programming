#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18;

vector<vector<ll>> dj(int start, int n, vector<vector<pair<int,int>>>& g) {
    vector<vector<ll>> 
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
    }
    vector<vector<ll>> r = dj(1,n,g);
    cout << r[n][1] << endl;
    return 0;
}
