#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, c = 0;
    cin >> n;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y + z) >= 2) c++;
    }
    cout << c << endl;
    return 0;
}