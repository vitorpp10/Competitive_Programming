#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double n;
    cin >> n;

    int nn = (int)(n * 100 + 0.5);
    int cash[]={10000, 5000, 2000, 1000, 500, 200};
    int coins[]={100, 50, 25, 10, 5, 1};
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << nn / cash[i] << " nota(s) de R$ " << fixed << setprecision(2) << cash[i] / 100.0 << endl;
        nn %= cash[i];
    }
    cout << "MOEDAS" << endl;
    for (int i = 0; i < 6; i++) {
        cout << nn / coins[i] << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] / 100.0 << endl;
        nn %= coins[i];
    }
    return 0;
}