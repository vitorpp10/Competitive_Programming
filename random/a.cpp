#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int INF = 100100;

int pai[INF];
int peso[INF];

int find(int x) {
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return;

    if(peso[x] < peso[y]) {
        pai[x] = y;
    } else {
        pai[y] = x;
        if(peso[x] == peso[y]) peso[x]++;
    }
}

struct Aresta {
    int u,v,custo;
    bool operator<(const Aresta& outra) const {
        return custo < outra.custo;
    }
};

int main() { 
    fastio;
    int n,m;
    cin >> n >> m;
    vector<Aresta> arestas;
    for(int i = 0; i < m; i++) {
        int u,v,custo;
        cin >> u >> v >> custo;
        arestas.push_back({u,v,custo});
    }
    for(int i = 0; i <= n; i++) {
        pai[i] = i;
        peso[i] = 0;
    }
    sort(arestas.begin(), arestas.end());
    int custo_mst = 0;
    for(Aresta a : arestas) {
        if(find (a.u) != find(a.v)) {
            join(a.u, a.v);
            custo_mst += a.custo;
        }
    }
    cout <<  "custo: " << custo_mst << endl;
    return 0;
}} 
