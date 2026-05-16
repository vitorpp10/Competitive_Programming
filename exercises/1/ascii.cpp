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
    cin.ignore();
    for (int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        vector<char> ls;
        for (char l : s) { ls.push_back(l); }
        int size = ls.size();
        for (int i = 0; i < size; i++) {
            if (isalpha(ls[i])) {
                ls[i] = ls[i] + 3;
            }
        }
        reverse(ls.begin(), ls.end());
        int m = size / 2;
        for (int i = m; i < size; i++) {
            ls[i] = ls[i] - 1;
        }
        stringstream ss;
        for (char c : ls) { ss << c; }
        cout << ss.str() << endl;
    }
    return 0;
}