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
    vector<vector<int>> v;
    for(int i = 0; i < n; i++) {
      vector<int> vv(2);
      for(int j = 0; j < n; j++) cin >> vv[j];
      v.push_back(vv);
    }
    /*
         * Nao precisamos olhar todos os indices pois se todos os nos so tem 1 conexao que seria o centro, entao basta descobrir qual numero se repete em outro bloco de indice, por isso olhamos apenas os blocos de indices 1 e 2 pois se tiver o mesmo numero em dois blocos diferentes = centro, no caso abaixo, so precisamos descobrir qual dos dois numeros do bloco e o centro 
    * */
    if(v[0][0] == v[1][0] || v[0][0] == v[1][1]) 
      cout << v[0][0] << endl;
    else cout << v[0][1] << endl;
    return 0;
}
