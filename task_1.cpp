#include <iostream>

template <typename T>
void Swap(int &m, int &n, T*& a, T*& b) {
    for (int i = 0; i < m && i < n; ++i) {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    int* p_a = a;
    int* p_b = b;

    Swap(m, n, p_a, p_b);

    for (int i = 0; i < m; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
