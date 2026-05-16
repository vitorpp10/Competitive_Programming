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
    cout << fixed << setprecision(6);
    cout << "digite o payload(mb): " << endl;
    cin >> n;

    const double ram_cf = 0.0000001; const double ram_th = 50'000.0;
    const double ssd_cf = 0.000020; const double ssd_th = 5000.0;
    const double hdd_cf = 0.010; const double hdd_th = 100.0;

    double ram_cv = n / ram_th; 
    double ssd_cv = n / ssd_th; 
    double hdd_cv = n / hdd_th; 

    //em ms ou seja s->ms*100, assumindo 1s = 1000ms
    double ram_t = (ram_cf + ram_cv) * 1000;
    double ssd_t = (ssd_cf + ssd_cv) * 1000;
    double hdd_t = (hdd_cf + hdd_cv) * 1000;
    
    cout << "tempo total ram: " << ram_t << "ms" << endl;
    cout << "tempo total ssd: " << ssd_t << "ms" << endl;
    cout << "tempo total hdd: " << hdd_t << "ms" << endl;
    return 0;
}