#include <bits/stdc++.h>

#define ll long long 
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    //grafo sem ciclo = tree, pode ser identificado quando aresta = vertice - 1 | 16v 15u->aresta = v-1 = 15
    //N = raiz
    //aresta = 2, if(1,4)->(4,1) = 2; 
    //nao importa de onde comece, logo, N nao importa
    //set<pair<int,int>> p; 
    //swap: input 1: 0,4, input 2: 4,0<-->swap(4,0)= 0,4(ja tem no set, ou seja, nao entra)
    //set<pair<int,int>> p;
    //swap(x,y);
    //size(p) * 2(multiplicamos por 2 porque uma aresta = 2)
    int tt;
    cin >> tt;
    while(tt--) {
      int n,v,a;
      cin >> n >> v >> a;
      set<pair<int,int>> p;
      for(int i = 0; i < a; i++) {
        int x,y;
        cin >> x >> y;
        if(x > y) swap(x,y);
        p.insert({x,y});
      }
      cout << p.size() * 2 << endl;
    }
    return 0;
}
