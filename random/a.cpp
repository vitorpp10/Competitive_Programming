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
    int n,m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) cin >> v[i][j];
    queue<pair<int,int>> q;
    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] == '.') {
                v[i][j] = '#';
                c++;
                q.push({i,j});
                while(q.size() > 0) {
                    pair<int,int> at = q.front();
                    q.pop();
                    for(int k = 0; k < 4; k++) {
                        int nx = at.first + dx[k];
                        int ny = at.second + dy[k];
                        if(nx >= 0 && ny >= 0 && nx < v.size() && ny < v[0].size() && v[nx][ny] == '.') {
                            v[nx][ny] = '#';
                            q.push({nx,ny});
                        } 
                    }
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}
