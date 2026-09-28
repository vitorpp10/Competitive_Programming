#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int BFS(int xi, int yi, int xf, int yf, vector<vector<int>>& v) {
    queue<pair<int,int>> q;
    vector<vector<int>> dist(v.size(), vector<int>(v[0].size(), -1));
    dist[xi][yi] = 0;
    q.push({xi,yi});
    while(q.size() > 0) {
        pair<int,int> axy = q.front();
        q.pop();
        if(axy.first == xf && axy.second == yf) return dist[axy.first][axy.second];
        for(int i = 0; i <= 3; i++) {
            int nx = axy.first + dx[i];
            int ny = axy.second + dy[i];
            if(nx >= 0 && ny >= 0 && nx < v.size() && ny < v[0].size()) {
                if(v[nx][ny] == 0 && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[axy.first][axy.second] + 1;
                    q.push({nx,ny});
                }
            }
        }
    }
    return -1;
}

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> v[i][j];
    int r = BFS(0,0,n-1,m-1,v);
    cout << r << endl;
    return 0;
}
