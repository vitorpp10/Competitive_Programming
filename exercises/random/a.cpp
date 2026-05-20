#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      double x,y,z;
      cin >> x >> y >> z;
      double m = (x*2) + (y*3) + (z*5) / (2+3+5);
      cout << fixed << setprecision(2);
      cout << m << endl;
    }
    return 0;
}
