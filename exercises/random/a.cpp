#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int d1;
    cin >> d1;
    int h1, m1, s1;
    cin >> h1 >> m1 >> s1;
    int d2;
    cin >> d2;
    int h2, m2, s2;
    cin >> h2 >> m2 >> s2;

    int si = (h1 *= 3600) + (m1 *= 60) + (s1);
    int sf = (h2 *= 3600) + (m2 *= 60) + (s2);
    int r = (d2 - d1) * 86400;
    int f = (sf + r) - si;

    //fazer aqui conversao para dias horas minutos e segundos 
    int days = 86400 / f;

    return 0;
}