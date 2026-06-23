#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    string s = "NO";
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= v.size(); i++) if(v[v[v[i]]] == v[0]) s = "YES";
    cout << s << endl;
    return 0;
}
