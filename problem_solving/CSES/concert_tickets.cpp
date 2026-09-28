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
    multiset<int> tickets;
    for(int i = 0; i < n; i++) {
        int h;
        cin >> h;
        tickets.insert(h);
    }
    while(m--) {
        int t;
        cin >> t;
        auto it = tickets.upper_bound(t);
        if(it == tickets.begin()) cout << -1 << endl;
        else {
            it--;
            cout << *it << endl;
            tickets.erase(it);
        }
    }
    return 0;
}