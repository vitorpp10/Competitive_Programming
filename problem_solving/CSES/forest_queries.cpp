#include <bits/stdc++.h>

#define ll long long 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, q; 
    cin >> n >> q;
    vector<vector<char>> g(n + 1, vector<char>(n + 1));
    vector<vector<int>> pref(n + 1, vector<int>(n + 1, 0)); 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> g[i][j];
            pref[i][j] = 
                pref[i - 1][j]
                + pref[i][j - 1] 
                - pref[i - 1][j - 1]
                + (g[i][j] == '*');
        }
    }
    while(q--) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        int ans = 
            pref[y2][x2]
            - pref[y1 - 1][x2] 
            - pref[y2][x1 - 1]
            + pref[y1 - 1][x1 - 1];
        cout << ans << endl;
    }
    return 0;
}