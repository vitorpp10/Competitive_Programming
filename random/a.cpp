#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define enl "\n"

using namespace std;

int main() {
    fastio;
    int n,m,c=0;
    cin >> n >> m;
    if(n > m) cout << n - m << endl;
    if(n == m) cout << 0 << endl;
    if(n < m) { 
        while(n < m) { 
            if((m&1) == 0) {
                m/=2;
                c++;
            } else {
                m+=1;
                c++;
            }
        }
        c+=(n-m);
        cout << c << endl;
    }
    return 0;
}
