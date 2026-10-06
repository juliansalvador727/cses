#include <iostream>

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << n << " ";
    while ( n != 1 ) {
        n = (n % 2) ? n * 3 + 1 : n / 2;
        std::cout << n << " ";
    }

    return 0;
}