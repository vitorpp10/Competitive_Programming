#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

double dj(int& s, int& e, vector<vector<pair<double,double>>>& edges) {
    vector<double> distance(edges.size(), -1);
    priority_queue<pair<double,double>, vector<pair<double,double>>> q;
    distance[s] = 1;
    q.push({1, s});
    while(q.size() > 0) {
        double w = q.top().first;
        int cw = q.top().second;
        if(w < distance[cw]) continue;
        for(auto& vi : edges[cw]) {
            double pv = vi.first;
            int cv = vi.second;
            if(distance[cv] < distance[cw] * pv) {
                distance[cv] = distance[cw] * pv;
                q.push({distance[cv],cv});
            }
        }
    }
    return distance[e];
}

int main() {
    fastio;
    int n;
    cin >> n;
    vector<vector<pair<double,double>>> edges(n);
    vector<double> succprob(n);
    for(int i = 0; i < n; i++) cin >> succprob[i];
    for(int i = 0; i < n; i++) { 
        int u, v;
        cin >> u >> v;
        edges[u].push_back({succprob[i], v});
        edges[v].push_back({succprob[i], u});
    }
    int start,end;
    cin >> start >> end;
    double r = dj(start, end, edges);
    cout << r << endl;
    return 0;
}