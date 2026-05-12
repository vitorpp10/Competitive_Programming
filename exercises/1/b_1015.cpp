#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double x1,y1,x2,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double d = ((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)); 
    d = sqrt(d);
    cout << fixed << setprecision(4);
    cout << d << endl;
    return 0;
}