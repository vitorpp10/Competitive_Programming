#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18;

    /* 
     * basicamente a gente cria dois universos e aloca todas as possiblidades em cada 1 com base em usou ou não uso do cupom
No universo 0 (d[cidade][0]) estamos assumindo que não usamos o cupompNo universo 1 (d[cidade][1]) assumimos que ja usamos desde o primeiro "pedágio" que seria a primeira parada.
Os If cada um faz uma coisa com base no universo atual
O primeiro você paga normal e não usa cupom
O segundo você paga no atual e vai para o 1 automaticamente porque você ja gastou
E o terceiro você gastou na primeira volta

No final printamos d[n][1] pois a questão quer saber de 1 até n com o cupom usado.


     * */

vector<vector<ll>> djcp(int x, int y, int z, vector<vector<pair<int,int>>>& g) {
    vector<vector<ll>> d(g.size(), vector<ll>(2, INF));
    priority_queue<pair<ll, pair<int,int>>, vector<pair<ll,pair<int,int>>>, greater<pair<ll,pair<int,int>>>> q;
    d[x][y] = 0;
    q.push({y, {x, z}});
    while(q.size() > 0) {
        ll w = q.top().first;
        int cw = q.top().second.first;
        int uw = q.top().second.second;
        if(w > d[cw][uw]) continue;
        for(auto& v : g[cw]) {
            int pv = v.first;
            int cv = v.second;
            if(d[cv][0] > d[cw][0] + pv) {
                d[cv][0] = d[cw][0] + pv;
                q.push({d[cv][0], {cv, 0}});
            }
            if(d[cv][1] > d[cw][0] + (pv / 2)) {
                d[cv][1] = d[cw][0] + (pv / 2);
                q.push({d[cv][1], {cv, 1}});
            } else if(d[cv][1] > d[cw][1] + pv) {
                d[cv][1] = d[cw][1] + pv;
                q.push({d[cv][1], {cv, 1}});
            }
        }
    }
    return d;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
    }
    vector<vector<ll>> r = djcp(1, 0, 0, g);
    cout << r[n][1] << endl;
    return 0;
}
