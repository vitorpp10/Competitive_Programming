#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int s,e,c=0;
    cin >> s >> e;
    vector<int> h;
    if (s != e) {
        for (int i = s; i < 24; i++) {
            if (i == e) { break; } else { c++; }
            if (i > 23) { break; }
        }
        for (int i = 0; i < 24; i++) {
            if (i != e) { c++; } else { break; }
        }
        cout << "COUTANDO> " << c << endl;
    } else { c = 24; cout << "O JOGO DUROU " << c << " HORA(S)" << endl; }
    return 0;
}