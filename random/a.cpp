#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int in,end,room=0;
    vector<int> vin;
    vector<int> vend;
    while(cin >> in >> end) {
        vin.push_back(in);
        vend.push_back(end);
    }
    //two pointer cl 
    sort(vin.begin(), vin.end());
    sort(vend.begin(), vend.end());
    int i = 0, j = 0;
    while(i < vin.size() && j < vend.size()) {
        if(vend[j] > vin[i]) {
            room++;
            i++;
        } else {
            room--;
            j++;
        }
    }
    cout << room << endl;
}
