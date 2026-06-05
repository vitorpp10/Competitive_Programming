#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<bool> p(n+1, true);
    vector<int> v;
    p[0] = p[1] = false;
    for(int i = 2; i * i <= n; i++)
      if(p[i]) 
        for (int j = i * i; j <= n; j+=i)
          p[j] = false;
    for(int i = 2; i <= n; i++) 
      if(p[i]) v.push_back(i);
    return 0;
}
