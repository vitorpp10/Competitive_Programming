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
    multiset<int> ml;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ml.insert(x);
    }
    while(m--) {
        int y;
        cin >> y;
        auto it = ml.upper_bound(y);
        if(it == ml.begin()) cout << -1 << endl;
        else {
            it--;
            cout << *it << endl;
            ml.erase(it);
        }
    }
    return 0;
}