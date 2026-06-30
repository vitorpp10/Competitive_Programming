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
    int tt;
    cin >> tt; 
    while(tt--) {
        vector<vector<int>> v(5, vector<int>(5));
        for(int i = 0; i < 5; i++)
            for(int j = 0; j < 5; j++) cin >> v[i][j];
        queue<pair<int,int>> q;
        v[0][0] = 2;
        q.push({0,0});
        while(q.size() > 0) {
            pair<int,int> axy = q.front();
            q.pop();
            for(int i = 0; i <= 3; i++) {
                int nx = axy.first + dx[i];
                int ny = axy.second + dy[i];
                if(nx >= 0 && ny >= 0 && nx < v.size() && ny < v[0].size() && v[nx][ny] == 0) {
                    v[nx][ny] = 2;
                    q.push({nx,ny});
                }
            }
        }
        if(v[v.size()-1][v[0].size()-1] == 2) cout << "COPS" << endl; else cout << "ROBBERS" << endl;
    }
    return 0;
}
