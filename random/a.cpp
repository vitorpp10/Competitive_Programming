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
    int n;
    cin >> n;
    cout << n/2 << endl;
    for(int i = 0, j = 2; i < n/2; i++) {
      if(i == n/2 - 1 && ((n&1) == 1)) j = 3;
      cout << j << " ";
    }
    return 0;
}
