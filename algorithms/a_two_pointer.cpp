#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i = 0; i < n; i++) cin >> v1[i];
    for(int i = 0; i < m; i++) cin >> v2[i];
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int me = 2e9;
    int i = 0, j = 0;
    while(i < n && j < m) {
      if(abs(v1[i] - v2[j]) < me) me = abs(v1[i] - v2[j]);
      if(v1[i] < v2[j]) i++; else j++;
    }
    cout << me << endl;
    return 0;
}
