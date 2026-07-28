//1 count cp AYRA'
#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int main() {
    fastio;
    //police && thief 4 directions fill
    int n,m;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> g[i][j];
    queue<pair<int,int>> q;
    vector<vector<int>> d(g.size(), vector<int>(g[0].size(), -1));
    d[0][0] = 0;
    q.push({0,0});
    while(q.size() > 0) { 
        pair<int,int> at = q.front();
        q.pop();
        if(at.first == 0 && at.second == 4) {
            cout << d[at.first][at.second] << endl;
            return EXIT_SUCCESS;
        }
        for(int i = 0; i < 4; i++) {
            int nx = at.first + dx[i];
            int ny = at.second + dy[i];
            if(nx >= 0 && ny >= 0 && nx < g.size() && ny < g[0].size() && d[nx][ny] == -1) {
                if(g[nx][ny] == '.' || g[nx][ny] == 'L') {
                    d[nx][ny] = d[at.first][at.second]+1;
                    q.push({nx,ny});
                }
            }
        }
    }
    cout << "impossible" << endl;
    return 0;
}
