#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            int m = n/i;
            cout << m << endl;
        }
    }
    return 0;
}