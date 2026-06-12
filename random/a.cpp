#include <bits/stdc++.h>
#include <cstdio>

#define ll long long 
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    if((n & 1) == 0 && n > 2) cout << "YES" << endl; else cout << "NO" << endl;
    return 0;
}
