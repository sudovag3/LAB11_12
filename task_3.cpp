#include <iostream>

template <typename T>
void multiply_array(int size, T* arr, T multiplier) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= multiplier;
    }
}

int main() {
    double arr[] = {1.0, 2.0, 3.0};
    int size = sizeof(arr) / sizeof(arr[0]);
    double multiplier = 2.0;

    multiply_array(size, arr, multiplier);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
