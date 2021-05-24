#include <iostream>
#include <math.h>

int main () {

    int x;

    std::cout << "Enter number" << std::endl;
    std::cin >> x;

    for (int i=2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            std::cout << x << " is not prime" << std::endl;
            break;
        }
        std::cout << x << " is prime" << std::endl;
        break;
    }

    if (x <= 1) {
        std::cout << "Your input is incorrect" << std::endl;
    }

    return 0;
}