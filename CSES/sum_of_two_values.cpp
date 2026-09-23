#include <bits/stdc++.h>

#define ll long long 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,x;
    cin >> n >> x;
    vector<pair<int,int>> v;
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        v.push_back({a,i});
    }
    sort(v.begin(), v.end());
    int i = 0;
    int j = n - 1;
    while(i < j) {
        int sum = v[i].first + v[j].first;
        if(sum == x) {
            cout << v[j].second << " " << v[i].second << endl;
            return EXIT_SUCCESS;
        }
        if(sum < x) i++;
        else j++;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}