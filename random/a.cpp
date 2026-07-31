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
    int s = 0, d = 0;
    int esquerda = 0;
    int direita = n - 1;
    bool turno_sereja = true;
    while (esquerda <= direita) {
        int carta_escolhida;
        if (v[esquerda] > v[direita]) {
            carta_escolhida = v[esquerda];
            esquerda++; 
        } else {
            carta_escolhida = v[direita];
            direita--;
        }
        if (turno_sereja) {
            s += carta_escolhida;
        } else {
            d += carta_escolhida;
        }
        turno_sereja = !turno_sereja;
    }
    cout << s << " " << d << endl;
    return 0;
}
