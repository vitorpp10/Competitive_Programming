#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

void BFS(int& x, int& y, vector<vector<char>>& grid) {
    queue<pair<int,int>> q;
    grid[x][y] = '0';
    q.push({x,y});
    while(q.size() > 0) {
        pair<int,int> axy = q.front();
        q.pop();
        for(int i = 0; i <= 3; i++) {
            int nx = axy.first + dx[i];
            int ny = axy.second + dy[i];
            if(nx >= 0 && ny >= 0 && nx < grid.size() && ny < grid[0].size() && grid[nx][ny] == '1') {
                grid[nx][ny] = '0';
                q.push({nx,ny});
            }
        }
    }
}

int main() {
    fastio;
    int n,m,t=0;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> grid[i][j];
    for(int i = 0; i < grid.size(); i++) {  
        for(int j = 0; j < grid[0].size(); j++) { 
            if(grid[i][j] == '1') {
                t++;
                BFS(i,j,grid);
            }
        }
    }
    cout << t << endl;
    return 0;
}
