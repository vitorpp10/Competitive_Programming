#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, tt;
    cin >> n >> tt;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    while(tt--) {
        int a,b;//c=0;
        cin >> a >> b;
        //for(int i = a; i <= b; i++) c += v[i];
        int c = accumulate(v.begin()+a, v.end()+(v.size()-b), 0);
        cout << c << endl;
    }
    return 0;
}
