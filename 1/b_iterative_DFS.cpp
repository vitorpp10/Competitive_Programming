#include <bits/stdc++.h>

#define ll long long 
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    //forest->some trees->some graphys with no cicles
    //queue->manager with employer
    //tree->employers, end = manager
    //manager = -1; if(n = -1) manager; else employer;
    //index->vetor(n) | n = employers 
    //vector<int> v(n+1), because question starts with n = 1;
    //int max=max queue;
    //int c=count;
    //loop(n)->while(employers != -1(manager)) { count++; i-esimo=v[i-esimo](my manager is tantos#); }
    int n,max=0;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) {
      int c = 0; 
      int t = i;
      while(t != -1) {
        c++;
        t = v[t];
      }
      if(c > max) max = c;
    }
    cout << max << endl;
    return 0;
}
