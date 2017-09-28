#include <iostream>
#include <string>
#include <math.h>

int main() {   
    int n;
    std::cout << "Введите число" << std::endl;
    std::cin >> n;
    n = fmod(n, 100) * 10 + n / 100;
    std::cout << n << std::endl;
    return 0;
}
