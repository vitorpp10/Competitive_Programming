#include <bits/stdc++.h>
#include <cstdio>

#define ll long long 
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int tt;
    cin >> tt;
    while(tt--) {
      string s;
      cin >> s;
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      if(s == "yes") cout << "YES" << endl; else cout << "NO" << endl;
    }
    return 0;
}
