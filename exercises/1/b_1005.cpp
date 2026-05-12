#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double a,b;
    cin >> a;
    cin >> b;
    a *= 3.5;
    b *= 7.5;
    double m = (a + b) / 11;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << (double)m << endl; 
    return 0;
}