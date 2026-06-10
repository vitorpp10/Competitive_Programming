#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    /*formula do gauss basicamente e: 
     * TOTAL = (TOTAL*(TOTAL+1)) / 2*/ 
    ll x,y,z;
    cin >> x >> y >> z;
    ll g = x*(z*(z+1))/2;
    cout << max(0LL, g - y) << endl; 
    return 0;
}
