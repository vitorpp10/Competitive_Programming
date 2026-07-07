#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int INF = 1e9;

int bfs(int x, int y, int xf, int yf, vector<vector<int>>& g) {
    vector<int> d(g.size(), INF);
    priority_queue<>
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> g[i][j];
    int r = bfs(0,0, n-1,m-1, g);
    cout << r << endl;
    return 0;
}
