#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

struct edge {
    int u,v,w;
};

bool compareEdges(edge a, edge b) {
    return a.w < b.w;
}

vector<int> boss;

int find(int x) {
    if(boss[x] == x) return x;
    return boss[x] = find(boss[x]);
}

void join(int a, int b) {
    a = find(a);
    b = find(b);
    if(a!=b) boss[a] = b;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<edge> edges;
    for(int i = 0; i < m; i++) {
        int u,v,w;
        cin >> u >> v >> w;
        edges.push_back({u,v,w});
    }
    sort(edges.begin(), edges.end(), compareEdges);
    boss.resize(n);
    for(int i = 0; i < n; i++) boss[i] = i;
    int c = 0;
    int buy = 0; 
    for(edge Edge : edges) {
        if(find(Edge.u) != find(Edge.v)) {
            join(Edge.u, Edge.v);
            c+=Edge.w;
            buy++;
            if(buy == n-1) break;
        }
    }
    cout << "cost: " << c << endl;
    return 0;
}
