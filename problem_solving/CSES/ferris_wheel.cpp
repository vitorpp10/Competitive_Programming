#include <bits/stdc++.h>

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,x,c=0;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int i = 0, j= n-1;
    while(i <= j) {
        if(i == j) {
            c++;
            break;
        }
        if(v[i] + v[j] <= x) {
            i++;
            j--;
        } else j--;
        c++;
    }
    cout << c << endl;
    return 0;
}
