#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

//8 bfs directions to do 
int dx[]={-1, -1, -1, 0, 0, 1, 1, 1};
int dy[]={-1, 0, 1, -1, 1, -1, 0, 1};

int bfs8(int xi, int yi, int xf, int yf, vector<vector<int>>& g) {
    queue<pair<int,int>> q;
    vector<vector<int>> d(g.size(), vector<int>(g[0].size(), -1));
    vector<vector<bool>> vis(g.size(), vector<bool>(g[0].size(), false));
    vis[xi][yi] = true;
    d[xi][yi] = 1;
    q.push({xi,yi});
    while(q.size() > 0) {
        pair<int,int> p = q.front();
        q.pop();
        if(p.first == xf && p.second == yf) return d[p.first][p.second];
        for(int i = 0; i < 8; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(nx >= 0 && ny >= 0 && nx < g.size() && ny < g[0].size())
                if(!vis[nx][ny] && g[nx][ny] == 0 && d[nx][ny] == -1) {
                    d[nx][ny] = d[p.first][p.second]+1;
                    vis[nx][ny] = true;
                    q.push({nx,ny});
                }
        }
    }
    return -1;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(m));
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) cin >> g[i][j];
    if(g[0][0] == 0 && g[g.size()-1][g[0].size()-1] == 0) {
        int r = bfs8(0,0,n-1,m-1,g);
        cout << r << endl;
    } else cout << -1 << endl;
    return 0;
}
