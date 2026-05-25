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
    int anterior = 0;
    int atual = 1;
    cout << anterior; 
    for (int i = 2; i <= n; i++) {
      int proximo = atual + anterior;
      cout << " " << proximo;
      atual = proximo;
      anterior = atual;
    }
    cout << endl;
    return 0;
}
