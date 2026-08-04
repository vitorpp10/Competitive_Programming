#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    string s;
    while(getline(cin, s)) {
        auto st = stack<char>();
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') st.push(s[i]);
            if(s[i] == ')' && !st.empty() && st.top() == '(')
                st.pop();
            else if(s[i] == ')') st.push(s[i]);
        }
        if(!st.empty()) cout << "incorrect" << endl;
        else cout << "correct" << endl;
    }
    return 0;
}
