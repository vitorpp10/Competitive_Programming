#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    string l, ll;
    cin >> l;
    vector<pair<char,char>> s;
    vector<bool> u(26, false);
    bool ok = true;
    for(int i = 0; i + 1 < l.size(); i++) s.push_back({l[i], l[i+1]});
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++) {
        auto [p1, p2] = s[i];
        if(p1 != p2 && !u[p1 - 'a'] && !u[p2 - 'a']) {
            ll += p1;
            ll += p2;
            u[p1 - 'a'] = true;
            u[p2 - 'a'] = true;
        }
    }
    for(char c : l) if(!u[c - 'a']) ok = false;
    if(ok) cout << ll << endl;
    else cout << -1 << endl;
    return 0;
}