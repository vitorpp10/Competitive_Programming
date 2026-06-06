#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double n,b,bf;
    cout << fixed << setprecision(6);
    cin >> n >> b >> bf;
    double qtdb = (n*1024) / b;
    double qtdbf = (n*1024) / bf;
    const double ram_cf = 0.0000001; const double ram_th = 50'000.0;
    const double ssd_cf = 0.000020; const double ssd_th = 5000.0;
    const double hdd_cf = 0.010; const double hdd_th = 100.0;
    double ram_cv = n / ram_th; 
    double ssd_cv = n / ssd_th; 
    double hdd_cv = n / hdd_th; 
    //total time without buffer
    double ram_t = ((ram_cf * qtdb) + ram_cv) * 1000;
    double ssd_t = ((ssd_cf * qtdb) + ssd_cv) * 1000;
    double hdd_t = ((hdd_cf * qtdb) + hdd_cv) * 1000;
    //total time with buffer
    double ram_tb = ((ram_cf * qtdbf) + ram_cv) * 1000;
    double ssd_tb = ((ssd_cf * qtdbf) + ssd_cv) * 1000;
    double hdd_tb = ((hdd_cf * qtdbf) + hdd_cv) * 1000;
    cout << "ram without buffer: " << ram_t << "ms" << endl;
    cout << "ssd without buffer: " << ssd_t << "ms" << endl;
    cout << "hdd without buffer: " << hdd_t << "ms" << endl;
    cout << endl << "ram with buffer: " << ram_tb << "ms" << endl;
    cout << "ssd with buffer: " << ssd_tb << "ms" << endl;
    cout << "hdd with buffer: " << hdd_tb << "ms" << endl;
    return 0;
}
