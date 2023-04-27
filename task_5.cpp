#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
std::vector<T> intersection(const std::vector<T>& a, const std::vector<T>& b) {
    std::vector<T> result;
    for (const auto& elem : a) {
        if (std::find(b.begin(), b.end(), elem) != b.end()) {
            result.push_back(elem);
        }
    }
    return result;
}

template <typename T>
std::vector<T> union_sets(const std::vector<T>& a, const std::vector<T>& b) {
    std::vector<T> result(a);
    for (const auto& elem : b) {
        if (std::find(a.begin(), a.end(), elem) == a.end()) {
            result.push_back(elem);
        }
    }
    return result;
}

template <typename T>
std::vector<T> difference(const std::vector<T>& a, const std::vector<T>& b) {
    std::vector<T> result;
    for (const auto& elem : a) {
        if (std::find(b.begin(), b.end(), elem) == b.end()) {
            result.push_back(elem);
        }
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b = {3, 4, 5, 6};

    std::vector<int> inter = intersection(a, b);
    std::vector<int> uni = union_sets(a, b);
    std::vector<int> diff = difference(a, b);

    std::cout << "Intersection: ";
    for (const auto& elem : inter) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Union: ";
    for (const auto& elem : uni) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Difference: ";
    for (const auto& elem : diff) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
