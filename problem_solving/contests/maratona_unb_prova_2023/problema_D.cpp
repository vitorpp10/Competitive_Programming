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
        int a,b,c;
        cin >> a >> b >> c;
        cout << 21 - (a+b+c) << endl;
    }
    return 0;
}
