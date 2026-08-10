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
    int n,c=0;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) {
        int current = i;
        int cc = 1;
        while(v[current] != -1) {
            current = v[current];
            cc++;
        } 
        if(cc > c) c = cc;
        //Lap 1:
        //current = 1;
        //cc = 1;
        //while(-1 != -1) No, cc = 1, 1 > 0? c = 1;
        //Lap 2:
        //current = 2;
        //cc = 1;
        //while(v[2] = 1 != -1) Yes, current = v[2] = 1, cc = 2;
        //while (v[1] = -1 != -1) No, cc = 2, 2 > 1? c = 2;
        //Lap 3:
        //...
    }
    cout << c << endl;
    return 0;
}

