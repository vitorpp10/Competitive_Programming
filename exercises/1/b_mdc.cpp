#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
      int x,y;
      cin >> x >> y;
      cout << gcd(x, y) << endl;
    }
    //gcd por tras dos panos 
    /*
    while(y != 0) { 
        int mdc = x % y;
        x = y;
        y = mdc;
      }
    */
    return 0;
}
