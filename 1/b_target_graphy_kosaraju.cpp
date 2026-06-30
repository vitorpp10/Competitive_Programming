#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void dfs(int in, vector<vector<int>>& v, vector<bool>& t) {
  t[in] = true;
  for(int i : v[in]) if(!t[i]) dfs(i, v, t);
}

int main() {
  fastio;
  int n,m;
  cin >> n >> m;
  while(n != 0 || m != 0) {
    vector<vector<int>> v1(n+1);
    vector<vector<int>> v2(n+1);
    vector<bool> t1(n+1, false);
    vector<bool> t2(n+1, false);
    for(int i = 1; i <= m; i++) {
      int v, w, p;
      cin >> v >> w >> p;
      if(p == 1) {
        v1[v].push_back(w);
        v2[w].push_back(v);
      } else {
        v1[v].push_back(w);
        v1[w].push_back(v);
        v2[v].push_back(w);
        v2[w].push_back(v);
      }
    }
    dfs(1, v1, t1);
    dfs(1, v2, t2);
    int r = 1;
    for(int i = 1; i <= n; i++) 
      if(t1[i] == false || t2[i] == false) r = 0;
    cout << r << endl;
    cin >> n >> m;
  }
  return 0;
}
