#include <bits/stdc++.h>
#include <iostream>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    bool b = true;
    stack<char> ss;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == '{') { ss.push('}'); continue; }
      if(s[i] == '(') { ss.push(')'); continue; }
      if(s[i] == '[') { ss.push(']'); continue; }
      if(!ss.empty() && s[i] == ss.top()) ss.pop(); else b = false;
    }
    if(b && ss.empty()) 
      cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}
