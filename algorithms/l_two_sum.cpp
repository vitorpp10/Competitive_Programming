#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++) cin >> v[i];
    for(int i = 0; i < v.size(); i++) 
      for(int j = i + 1; j < v.size(); j++) 
        if(v[j] == t - v[i]) cout << "[" << i << "," << j << "]" << endl;
    return 0;
}
