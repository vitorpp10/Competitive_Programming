#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    vector<int> v(7);
    for(int i = 0; i < 7; i++) cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[1] << " " << v[7-1] - (v[0] + v[1]); 
    return 0;
}