#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

void fillColor(int& sr, int& sc, int& color, vector<vector<int>>& image) {
    queue<pair<int,int>> q;
    int initial = image[sr][sc];
    image[sr][sc] = color;
    q.push({sr,sc});
    if(initial != color) {
        while(q.size() > 0) {
            pair<int,int> axy = q.front();
            q.pop();
            for(int i = 0; i <= 3; i++) {
                int nx = axy.first + dx[i];
                int ny = axy.second + dy[i];
                if(nx >= 0 && ny >= 0 && nx < image.size() && ny < image[0].size() && image[nx][ny] == initial) {
                    image[nx][ny] = color;
                    q.push({nx,ny});
                }
            } 
        }
    }
    for(int i = 0; i < image.size(); i++) {
        for(int j = 0; j < image[0].size(); j++) {
            cout << image[i][j] << " ";
        }
        cout << endl; 
    }
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> image(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> image[i][j];
    int sr,sc,color;
    cin >> sr >> sc >> color;
    fillColor(sr, sc, color, image);
    return 0;
}
