#include <bits/stdc++.h>

#define ll long long    
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    for(int z = 2; z--;) {
        string s;
        cin >> s;
        vector<int> pref(s.size(), 0);
        for(int i = 1; i < s.size(); i++) {
            pref[i] = pref[i - 1];
            if(s[i] == s[i-1]) pref[i]++;
        }    
        int m;
        cin >> m;
        while(m--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r - 1] - pref[l - 1] << endl;
        }
        cout << endl << endl;
    }
    return 0;
}