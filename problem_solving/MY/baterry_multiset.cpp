#include <bits/stdc++.h>

#define ll long long 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    multiset<int> ap;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ap.insert(a);
    }
    while(m--) {
        int b;
        cin >> b;
        auto it = ap.lower_bound(b);
        if(it == ap.end()) cout << -1 << endl;
        else {
            cout << *it << endl;
            ap.erase(it);
        }
    }
    return 0; 
}