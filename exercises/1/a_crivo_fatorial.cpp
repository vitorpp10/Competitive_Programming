#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n,c=0;
    cin >> n;
    vector<int> v(n+1, 0);
    for(int i = 2; i <= n; i++)
      if(v[i] == 0)
        for(int j = i; j <= n; j+=i) 
          v[j]++;
    for(int i = 1; i <= n; i++)
      if(v[i] == 2) c++; 
    cout << "qtd quase-primos> " << c << endl;
    return 0;
}
