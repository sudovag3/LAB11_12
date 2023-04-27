#include <iostream>
#include <cstring>

template <typename T>
T& max(T &m, T &n) {
    return (m > n) ? m : n;
}

template <typename T>
T& max(T &m, T &n, T &p) {
    return max(max(m, n), p);
}

char* &max(char*& s1, char* &s2) {
    return (strcmp(s1, s2) < 0) ? s1 : s2;
}

int main() {
    int a = 3, b = 5, c = 4;
    std::cout << "Max: " << max(a, b) << std::endl;
    std::cout << "Max: " << max(a, b, c) << std::endl;

    char s1[] = "Hello23";
    char s2[] = "Aorld";
    char* p_s1 = s1;
    char* p_s2 = s2;
    std::cout << "Max: " << max(p_s1, p_s2) << std::endl;

    return 0;
}
