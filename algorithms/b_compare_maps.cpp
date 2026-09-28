//comparando itens de um map com outro e fazendo calculos

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
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        map<string, double> m1;
        map<string, double> m2;
        int m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            string x; double y;
            cin >> x >> y;
            m1[x] = y;
        }
        int p;
        cin >> p;
        for (int i = 0; i < p; i++) { 
            string x; int y;
            cin >> x >> y;
            m2[x] = y;
        }
        double r = 0;
        for (const auto& f : m1) {
            string name = f.first;
            double v1 = f.second;
            
            auto i = m2.find(name);
            if (i != m2.end()) {
                double v2 = i->second;
                r += v1 * v2;
            }
        }
        cout << "R$ " << r << endl;
    }
    return 0;
}