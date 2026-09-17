#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    //for(int k = 3; k--;) {
        string s;
        getline(cin, s); //beazcd -> ordem alfabetica (set ou sort) -> de 2 em 2 em ordem alfabetica
        vector<pair<char,char>> ss(s.size());
        for(int i = 0; i < s.size(); i++) ss.push_back({s[i], s[i+1]});
        sort(ss.begin(), ss.end());
        auto at = ss.begin();
        while(at != ss.end() && at + 1 != ss.end()) {
            auto pro = at + 1;
            if(at->first == pro->first || at->first == pro->second || at->second == pro->first || at->second == pro->second) {
                at = ss.erase(pro); 
            } else at++;
        }
        for(auto& p : ss) cout << p.first << p.second;
        cout << endl;
    //}
    return 0;
}
