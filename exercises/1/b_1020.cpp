#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int x;
    cin >> x;
    int y=365,m=30,d=1, cy=0, cm=0, cc=0;
    while (x > 0) {
        if (x >= y) { 
            x -= y; cy++; 
        } else if (x >= m) { x -= m; cm++; } else { x-=d; cc++; }
    }
    cout << cy << " ano(s)" << endl;
    cout << cm << " mes(es)" << endl;
    cout << cc << " dia(s)" << endl;
    return 0;
}