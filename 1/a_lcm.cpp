#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int x,y;
    cin >> x >> y;
    int mmc = lcm(x, y);
    cout << mmc << endl;
    return 0;
}
