#include <bits/stdc++.h>
#include <ctime>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int x, z;
    cin >> x;
    cin >> z;
    while (z <= x) { cin >> z;}
    int c = 0, s = 0;
    while (s <= z) { c++; s += x; x++; }
    cout << c << endl;
    return 0;
}
