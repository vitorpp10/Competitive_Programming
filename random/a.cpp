#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    //1 a n | v[n + 1]
    //fa > fb --> fa supervisor > fb 
    //fa com fa --> sempre superioridade
    //output = número mínimo de grupos formados
    //pi = denota o superior imediato do funcionário atual 
    //pi == -1 --> o funcionário atual não tem supervisor
    //pi != i, ou seja, ninguém é supervisor de si mesmo 
    //grupo -> funconarios e somente 1 chefe(supervisor)
    //while(true) {
    //  if(vetor[atual] = -1) {
    //      c++;
    //      break;
    //  } else {
    //      vetor[atual] = atual;
    //  }
    //
    //}
    int n;
    cin >> n;
    return 0;
}
