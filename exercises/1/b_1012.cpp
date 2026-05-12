#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double a,b,c, pi=3.14159;
    cin >> a >> b >> c;
    double tri = (a*c)/2, cc = (pi*(c*c)), tra=((a+b)*c)/2, q=b*b, r=a*b;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (double)tri << endl;
    cout << "CIRCULO: " << (double)cc << endl;
    cout << "TRAPEZIO: " << (double)tra << endl;
    cout << "QUADRADO: " << (double)q << endl;
    cout << "RETANGULO: " << (double)r << endl;
    return 0;
}