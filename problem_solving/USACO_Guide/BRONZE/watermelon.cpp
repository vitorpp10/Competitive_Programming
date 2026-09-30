#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int w;
    cin >> w;
    if (((w & 1) == 0) && w != 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}