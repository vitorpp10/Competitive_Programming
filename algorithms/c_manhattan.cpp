#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,l,c;
    cin >> n;
    for(int i = 1; i <= 5; i++) {
      for(int j = 1; j <= 5; j++) {
        cin >> n;
        if(n == 1) {
          l = i;
          c = j;
        }
      }
    }
    cout << abs(l - 3) + abs(c - 3) << endl;
    return 0;
}
