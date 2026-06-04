#include <bits/stdc++.h>

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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    int s=0, ss=1; //1 pois comeca positivo se comecar negativo mude para -1
    for(int i = 0; i < v.size(); i++) {
      s += v[i] * ss;
      ss = -ss;
    }
    cout << s << endl;
    return 0;
}
