#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> boss;

int find(int x) {
    if(boss[x] == x) return x;
    return boss[x] = find(boss[x]);
}

void join(int a, int b) {
    a = find(a);
    b = find(b);
    if(a != b) boss[a] = b;
}

int main() {
    fastio;
    int n;
    cin >> n;
    vector<pair<int,int>> g;
    for(int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;
        g.push_back({x,y});
    }
    boss.resize(n);
    for(int i = 0; i < n; i++) boss[i] = i;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++) 
            if(g[i].first == g[j].first || g[i].second == g[j].second)
                join(i, j);
    int c = 0;
    for(int i = 0; i < n; i++) 
        if(boss[i] == i) c++;
    cout << c-1 << endl;
    return 0;
}
