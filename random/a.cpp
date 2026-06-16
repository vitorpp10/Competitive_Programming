#include <bits/stdc++.h>

#define ll long long 
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int tt;
    cin >> tt;
    while(tt--) {
        int n,v,a;
        cin >> n >> v >> a;
        set<pair<int,int>> p;
        for(int i = 0; i < a; i++) {
            int x,y;
            cin >> x >> y;
            if(x > y) swap(x,y);
            p.insert({x,y});
        }
        cout << p.size() * 2 << endl;
    }
    return 0;
}
