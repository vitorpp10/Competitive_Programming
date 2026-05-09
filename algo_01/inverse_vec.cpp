#include<iostream>
#include<vector>
#include<cstdlib>

void swap(std::vector<int>& arr) {
    int l = 0;
    int r = arr.size() - 1;

    while(l < r) {
        int temp = arr[l]; //1 | 2 | 3
        arr[l] = arr[r]; //index 0 -> 1 | index 1 -> 2 | index 2 -> 3
        arr[r] = temp; //index 3 -> 1 | index 2 -> 2 | index 1 -> 3
        l++;
        r--;
    }

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i];
    }
}

int main() {
    int x;
    std::cin >> x;
    std::vector<int> arr;
    for (int i = 0; i < x; i++) {
        int y; 
        std::cin >> y;
        arr.push_back(y);
    }
    swap(arr);
    return EXIT_SUCCESS;
}