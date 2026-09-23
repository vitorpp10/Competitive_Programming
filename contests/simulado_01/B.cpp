#include <bits/stdc++.h>

#define ll long long 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    //multiset
    int n, m;
    cin >> n >> m;
    multiset<int> obj;
    for(int i = 1; i <= n; i++) {
        int c;
        cin >> c;
        obj.insert(c);
    }
    while(m--) {
        int x;
        cin >> x;
        auto it = obj.upper_bound(x);
        if(it == obj.begin()) cout << -1 << endl;
        else {
            cout << *it << endl;
            it--;
            obj.erase(*it);
        }
    }
    return 0;
}

/* 
while(m--) {
    int x;
    cin >> x;    
    auto it = obj.upper/lower_bound(x);
    if(it == obj.end()) {
        poss1: it--;
        obj.erase(x);
        poss2: obj.erase(*it);
    }
}
*/