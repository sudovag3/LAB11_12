#include <iostream>

template <typename T>
int find_index(int size, T* arr, T target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int index = find_index(size, arr, target);
    std::cout << "Index: " << index << std::endl;

    return 0;
}
