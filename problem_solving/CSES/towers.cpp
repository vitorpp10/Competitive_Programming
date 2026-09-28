#include <bits/stdc++.h>

#define ll long long 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> tops;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        auto it = upper_bound(tops.begin(), tops.end(), k);
        if(it == tops.end()) tops.push_back(k);
        else *it = k;
    }
    cout << tops.size() << endl;
    return 0;
}