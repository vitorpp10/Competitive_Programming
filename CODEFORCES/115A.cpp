#include <bits/stdc++.h>

#define ll long long 
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio; 
    int n,max=0;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) {
      int t = i;
      int c = 0;
      while(t != -1) {
        c++;
        t = v[t];
      }
      if(c > max) max = c;
    }
    cout << max << endl;
    return 0;
}
