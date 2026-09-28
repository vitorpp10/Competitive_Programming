#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    set<int> s;
    int l = 0;
    int m = 0;
    for(int i = 0; i < n; i++) {
        while(s.count(v[i])) {
            s.erase(v[l]);
            l++;
        }
        s.insert(v[i]);
        m = max(m, i - l + 1);
    }
    cout << m << endl;
    return 0;
}