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
        int n;
        bool p = true;
        cin >> n;
        int sn = (int)sqrt(n);
        for(int i = 2; i * i <= sn; i++) if(sn % i == 0) p = false;
        if(p) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
