#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int l; 
    char n;
    cin >> l >> n;
    double s = 0; 
    vector<vector<double>> m(12, vector<double>(12));
    for(int i = 0; i < 12; i++)
      for(int j = 0; j < 12; j++)
        cin >> m[i][j];
    for(int j = 0; j < 12; j++)
      s += m[l][j];
    if(n == 'S') { 
      cout << fixed << setprecision(1) << s << endl;
    } else if(n == 'M') { cout << fixed << setprecision(1) << (double)s/12 << endl; }
    return 0;
}
