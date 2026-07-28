#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int INF = 1e9;

int main() {
    fastio;
    int n,m,a,b,c;
    cin >> n >> m;
    vector<vector<pair<int,int>>> g(n);
    for(int i = 0; i < m; i++) {
        int u,v,l;
        cin >> u >> v >> l, u--,v--;
        g[u].push_back({l,v});
        g[v].push_back({l,u});
    }
    cin >> a >> b >> c;
    vector<int> d1(g.size(), INF);
    vector<int> d2(g.size(), INF);
    vector<int> p1(g.size(), -1);
    vector<int> p2(g.size(), -1); 
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q1;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q2;
    d1[a] = 0;
    d2[b] = 0;
    q1.push({0,a});
    q2.push({0,b});
    while(q1.size() > 0) {
        int w1 = q1.top().first;
        int cw1 = q1.top().second;
        q1.pop();
        if(w1 > d1[cw1]) continue;
        for(auto& v1 : g[cw1]) {
            int pv1 = v1.first;
            int cv1 = v1.second;
            if(d1[cv1] > d1[cw1]+pv1) {
                d1[cv1] = d1[cw1]+pv1;
                p1[cv1] = cw1;
                q1.push({d1[cv1], cv1});
            }
        }
    }
    while(q2.size() > 0) {
        int w2 = q2.top().first;
        int cw2 = q2.top().second;
        q2.pop();
        if(w2 > d2[cw2]) continue;
        for(auto& v2 : g[cw2]) {
            int pv2 = v2.first;
            int cv2 = v2.second;
            if(d2[cv2] > d2[cw2]+pv2) {
                d2[cv2] = d2[cw2]+pv2;
                p2[cv2] = cw2;
                q2.push({d2[cv2], cv2});
            }
        }
    }
    if(p1[n-1] == -1 || p2[n-1] == -1) cout << -1 << endl; 
    else {
        vector<int> rp1;
        vector<int> rp2;
        int tt1 = n-1;
        int tt2 = n-1;
        while(tt1 != -1) {
            rp1.push_back(tt1);
            tt1 = p1[tt1];
        }
        while(tt2 != -1) {
            rp2.push_back(tt2);
            tt2 = p2[tt2];
        }
        ll s1 = accumulate(rp1.begin(), rp1.end(), 0LL);
        ll s2 = accumulate(rp2.begin(), rp2.end(), 0LL);
        cout << s1+s2 << endl;
    }
    return 0;
}
