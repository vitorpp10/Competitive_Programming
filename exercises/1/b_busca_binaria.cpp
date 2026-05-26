#include <algorithm>
#include <bits/stdc++.h>
#include <iomanip>
#include <numeric>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,a;
    while(cin >> n >> a && (n != 0 || a != 0)) {
      vector<double> v;
      for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
      }
      double sv = accumulate(v.begin(), v.end(), 0LL);
      if (sv == a) { 
        cout << ":D" << endl; 
        continue;
      } else if (sv < a) { cout << "-.-" << endl; continue; }
      double low = 0;
      double high = *max_element(v.begin(), v.end());
      for (int i = 0; i < 100; i++) {
        double mid = (low+high) / 2.0;
        double area = 0;
        for (int j = 0; j < n; j++) {
          if (v[j] > mid) { 
            area += (v[j] - mid);
          } 
        }
        if (area > a) {
          low = mid;
        } else { high = mid; }
      }
      cout << fixed << setprecision(4) << low << endl;
    }
    return 0;
}
