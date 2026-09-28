#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    //two pointer base 
    //vm[i] >= vn[i]-k && vm[i] <= vn[i]+k
    //30 >= 40 && 30 <= 50? No, j++
    //60 >= 40 && 60 <= 50? No, j++ 
    //Otimization suggestion: if(vm[i] > vn[i]+k) i++;
    //60 >= 55 && 60 <= 60? Yes, c++, i++, j++;
    //75 >= 75 && 75 <= 85? Yes, c++, i++, j++;
    int n, m, k; //n = x people, m = x apartaments, k = diferent
    cin >> n >> m >> k;
    vector<int> vn(n); //60 45 80 60
    vector<int> vm(m); //30 60 75 
    for(int i = 0; i < n; i++) cin >> vn[i];
    for(int i = 0; i < m; i++) cin >> vm[i];
    sort(vn.begin(), vn.end()); //45 60 60 80
    sort(vm.begin(), vm.end()); //30 60 75
    int i = 0, j = 0, c = 0;
    while(i < n && j < m) {
        if(i < n && vm[j] > vn[i] + k) {
            i++;
            continue;
        } else if(j < m && vm[j] < vn[i] - k) {
            j++;
            continue;
        }
        if(vm[j] >= vn[i] - k && vm[j] <= vn[i] + k) {
            c++;
            if(i < n) i++;
            if(j < m) j++;
        }

        // if(vm[j] >= vn[i] - k) {
        //     if(vm[j] <= vn[i] + k) {
        //         c++;
        //         i++;
        //         j++;
        //     } else if(i < n) i++;
        // } else if(j < m) j++;
        

        //30 >= 40? No, j++
        //60 >= 40? Yes
        //60 <= 50? No, i++;
        //60 >= 60? Yes 
        //60 <= 65? Yes, c = 1, i++, j++
        //75 >= 55? Yes
        //75 <= 65? No, i++
        //75 >= 75? Yes
        //75 <= 85? Yes, c = 2, i++, j++
    }
    cout << c << endl;
    return 0;
}
