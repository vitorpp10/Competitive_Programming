#include<iostream>
#include<vector>
#include<cstdlib>

int main() {
    int n, t;
    std::cin >> n >> t;
    std::vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }
    int ll = 0;
    int rr = 0;
    int l = 0;
    int r = (int)arr.size() - 1;
    while (l < r) {
        if (arr[l] + arr[r] == t) { std::cout << l << " + " << r << " = " << t << '\n'; exit(EXIT_SUCCESS); }
        if (arr[l] + arr[r] > t) {
            r--;
        } else if (arr[l] + arr[r] < t) {
            l++;
        }
    }
    std::cout << "Nada encontrado.\n"; 
    return EXIT_SUCCESS;
}