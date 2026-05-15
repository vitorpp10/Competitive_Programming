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
    cin >> h1; cout << " : "; cin >> m1; cout << " : "; cin >> s1;
    int d2;
    cin >> d2;
    int h2, m2, s2;
    cin >> h2; cout << " : "; cin >> m2; cout << " : "; cin >> s2;

    int d = 0, si = 0, sf = 0; 

    h1 *= 120;
    m1 *= 60;
    h2 *= 120;
    m2 *= 60;
    si = h1 + m1 + s1;
    sf = h2 + m2 + s2;

    

    return 0;
}