#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int BFS(int& n, int& m, vector<bool>& v) {
    queue<pair<int,int>> q;
    q.push({n,0});
    v[n] = true;
    while(!q.empty()) {
        pair<int,int> p = q.front();
        q.pop();
        if(p.first == m) return p.second;
        int nx = p.first * 2;
        int ny = p.first - 1;
        if(nx > 0 && nx < v.size() && !v[nx]) {
            q.push({nx,p.second+1});
            v[nx] = true;
        }
        if(ny > 0 && ny < v.size() && !v[ny]) {
            q.push({ny,p.second+1});
            v[ny] = true;
        }
    }
    return -1;
}

int main() {
    fastio;
    int n,m;
    cin >> n >> m;
    vector<bool> v(20005, false);
    int r = BFS(n, m, v);
    cout << r << endl;
    return 0;
}


/*
 * another method to do this exercise
 * 
 *
 *#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define enl "\n"

using namespace std;

int main() {
    fastio;
    int n,m,c=0;
    cin >> n >> m;
    if(n > m) cout << n - m << endl;
    if(n == m) cout << 0 << endl;
    if(n < m) { 
        while(n < m) { 
            if((m&1) == 0) {
                m/=2;
                c++;
            } else {
                m+=1;
                c++;
            }
        }
        c+=(n-m);
        cout << c << endl;
    }
    return 0;
}
 *
 * */
