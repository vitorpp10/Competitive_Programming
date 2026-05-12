#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double r, pi=3.14159;
    cin >> r;
    double a = pi * (r * r);
    cout << fixed << setprecision(4);
    cout << "A=" << (double)a << endl;
    return 0;
}