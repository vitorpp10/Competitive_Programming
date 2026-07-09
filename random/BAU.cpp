/* 

1: 
        
#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> bfs(int& a, int& b, vector<vector<int>>& g) {
    queue<int> q;
    vector<int> d(g.size(), -1);
    vector<bool> bb(g.size(), false);
    bb[a] = true;
    q.push(a);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        for(int& v : g[at]) {
            if(!bb[v]) {
                bb[v] = true;
                d[v] = at;
                q.push(v);
            }
        } 
    }
    return d;
} 

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    int a,b;
    cin >> a >> b;
    vector<int> r = bfs(a,b,g);
    if(r[b] == -1) return 1;
    else {
        vector<int> rr;
        int t = g.size()-1;
        while(t != -1) {
            rr.push_back(t);
            t = r[t];
        }
        reverse(rr.begin(), rr.end());
        cout << "size: " << rr.size() << endl;
        cout << "final vector: ";
        for(const int& rrr : rr) cout << rrr << " ";
    }
    return 0;
}
*/ 

/* 
 * 2:
 *
 * #include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const ll INF = 1e18;

vector<ll> dj(int& o, int& of, vector<vector<pair<int,int>>>& g) {
    vector<ll> d(g.size(), INF);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    d[o] = 0;
    q.push({0, o});
    while(q.size() > 0) {
        ll w = q.top().first;
        int cw = q.top().second;
        q.pop();
        if(w > d[cw]) continue;
        for(auto& v : g[cw]) {
            ll pv = v.first;
            int cv = v.second;
            if(d[cv] > d[cw] + pv) {
                d[cv] = d[cw] + pv;
                q.push({d[cv], cv});
            }
        }
    }
    return d;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l;
        g[u].push_back({l,v});
    }
    int a,b;
    cin >> a >> b;
    vector<ll> r = dj(a,b,g);
    cout << r[b] << endl;
    // ou 
     *
     *  cout << r[g.size()-1] << endl; porem acho mais sentido ser b ne, ja que ele e o destino
    return 0;
}
 * 
 *
 *
 * 3:
 *
 *#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string bi(int o, vector<vector<int>>& g) {
    queue<int> q;
    vector<int> c(g.size(), -1);
    q.push(o);
    while(q.size() > 0) {
        int at = q.front();
        q.pop();
        for(int& v : g[at]) {
            if(c[v] == c[at]) return "NAO";
            else if(c[v] == -1) {
                c[v] = 1 - c[at];
                q.push(o);
            }
        }
    }
    return "SIM";
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    string r = bi(0,g);
    cout << r << endl;
    return 0;
}

