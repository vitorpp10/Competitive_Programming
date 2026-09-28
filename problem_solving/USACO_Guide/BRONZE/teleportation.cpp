#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int lowest(int a, int b, int x, int y) { 
    int d1 = abs(a - b);
    int d2 = abs(a - x) + abs(b - y);
    int d3 = abs(a - y) + abs(b - x);
    return min({d1, d2, d3});
}

int main() {
    fastio;
    
    //the necessary lines to USACO reads and write
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int resp = lowest(a, b, x, y);
    cout << resp << endl;
    return 0;
}