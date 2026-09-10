#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, i;
    cin >> n >> i;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    int j = n, m;
    while(true) {
        m = v[j] - v[1];
        if(m > i) {
            j--;
            continue;
        }
        else if(m <= i) break;
    }
    cout << j << endl;
    return 0;
}
