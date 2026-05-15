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
    cout << endl;
    int d2;
    cin >> d2;
    int h2, m2, s2;
    cin >> h2 >> m2 >> s2;

    int si = 0;
    h1 *= 120;
    m1 *= 60;
    si = h1 + m1 + s1;
    
    int sf = 0;
    h2 *= 120;
    m2 *= 60;
    s2 = h1 + m1 + s1;
    
    int d = d2 - d1;
    int x = (86600 * d) + (sf - si);
    cout << x << endl;
    return 0;
}