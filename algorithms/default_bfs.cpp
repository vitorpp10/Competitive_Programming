#include <bits/stdc++.h>

#define ll long long
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> bfs(int start_street, int& size_total, vector<vector<int>>& city_map) {
    queue<int> street;
    vector<int> final_path(size_total, -1);
    vector<bool> check_or_not(size_total, false);
    street.push(start_street);
    check_or_not[start_street] = true;
    while(street.size() > 0) { 
        int current_street = street.front();
        street.pop();
        for(int& next_street : city_map[current_street]) {
            if(!check_or_not[next_street]) {
                check_or_not[next_street] = true;
                final_path[next_street] = current_street;
                street.push(next_street);
            }
        }
    }
    return final_path;
}

int main() {
    fastio;
    int size_total, number_streets;
    cin >> size_total >> number_streets;
    vector<vector<int>> city(size_total);
    for(int i = 0; i < number_streets; i++) {
        int street_a, street_b;
        cin >> street_a >> street_b, street_a--, street_b--;
        city[street_a].push_back(street_b);
        city[street_b].push_back(street_a);
    }
    vector<int> initial_result = bfs(0,size_total,city);
    if(initial_result[size_total-1] == -1) cout << "IMPOSSIBLE connect streets" << endl;
    else {
        vector<int> result_city;
        int current = size_total-1;
        while(current != -1) {
            result_city.push_back(current);
            current = initial_result[current];
        }
        reverse(result_city.begin(), result_city.end());
        cout << result_city.size() << endl;
        for(const int& city_streets : result_city) cout << city_streets << " ";
    }
    return 0;
}
