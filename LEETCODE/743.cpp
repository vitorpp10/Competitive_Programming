#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int INF = 1e9;

int dj(int& o, int& n, vector<vector<pair<int,int>>>& times) {
    vector<int> d(n, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    d[o] = 0;
    q.push({0,o});
    while(!q.empty()) {
        int w = q.top().first;
        int cw = q.top().second;
        q.pop();
        if(w > d[cw]) continue;
        for(auto& v : times[cw]) {
            int pv = v.first;
            int cv = v.second;
            if(d[cv] > d[cw] + pv) {
                d[cv] = d[cw] + pv;
                q.push({d[cv], cv});
            }
        }
    }
    auto it = max_element(d.begin(), d.end());
    bool t = false;
    for(const int& dd : d) if(dd == 1e9) t = true;
    if(t) return -1;
    else return *it;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> times(n);
    for(int i = 0; i < m; i++) {
        int ui,vi,wi;
        cin >> ui >> vi >> wi, ui--,vi--;
        times[ui].push_back({wi,vi});
    }
    int k;
    cin >> k,k--;
    int r = dj(k,n,times);
    cout << r << endl;
    return 0;
}
