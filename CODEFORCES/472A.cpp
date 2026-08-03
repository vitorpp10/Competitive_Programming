#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    //n->input
    //x && y where x and y are a compost number, i.e., have some divisors in addition 1 or him 
    //example: n = 12;
    //output: x = 4, because 4 is not prime, soon, is a compost number | y = 8 because is a compost number
    int n;
    cin >> n;
    if((n & 1) == 0) cout << 4 << " " << n - 4 << endl; //the smallest even compost number is 4, soon, n - 4 = another compost number
    else cout << 9 << " " << n - 9 << endl; //the smallest odd compost number is 9, soon, n - 9 = another compost number
    return 0;
}
