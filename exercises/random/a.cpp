#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    map<char,int> m={{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
    string ss;
    int s = 0;
    cin >> ss;
    for(int i = 0; i < ss.size(); i++)
      if(i+1 < ss.size() && m[ss[i]] < m[ss[i+1]]) 
        s -= m[ss[i]];
      else 
        s += m[ss[i]];
    cout << s << endl;
    return 0;
}
