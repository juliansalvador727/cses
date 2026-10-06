#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    long long x = 1LL * n * (n + 1) / 2;

    for (int i = 0; i < n - 1; ++i) {
        long long y;
        std::cin >> y;
        x -= y;
    }

    std::cout << x << "\n";
    return 0;
}