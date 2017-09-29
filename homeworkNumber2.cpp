#include <iostream>
#include <string>
#include <math.h>

int main(){
    std::cout << "Введите число" << std::endl;
    int n;
    std::cin >> n;
    n = fmod(n, 100) * 10 + n / 100;
    std::cout << n << std::endl;
    return 0;
}
