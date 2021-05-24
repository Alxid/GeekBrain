#include <iostream>

int main () {

    int a;
    int b;

    std::cin >> a;
    std::cin >> b;

    if ((a + b) >= 10 && (a + b) <= 20) {
        std::cout << "TRUE!" << std::endl;
    } else {
        std::cout << "FALSE!" << std::endl;
    }



    return 0;
}
