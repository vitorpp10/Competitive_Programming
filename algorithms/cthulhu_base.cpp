#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,e;
    cin >> n >> e;
    if(e == n-1) cout << "TREE" << endl;
    else if(e == n) cout << "MONSTER" << endl;
    else cout << "ANONYMOUS" << endl;
    return 0;
}
