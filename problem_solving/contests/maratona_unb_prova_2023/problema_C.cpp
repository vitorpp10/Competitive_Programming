#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    for(int k = 3; k--;) {
        string s;
        cin >> s; //seladoregistradocarimbadoavaliadorotulado
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<string> ss = {"selado", "registrado", "carimbado", "avaliado", "rotulado"};
        bool ok = true;
        size_t i = 0;
        for(string& sss : ss) { //5 vezes 
            size_t f = s.find(sss, i); //find(selado, 0)
            if(f == string::npos) {
                ok = false;
                break;
            }
            i = f + sss.size();
        }
        if(ok) cout << "Sim, sim, sim, sim." << endl;
        else cout << "Nao vai a lugar nenhum." << endl;
    }
    return 0;
}
