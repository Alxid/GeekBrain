#include <iostream>

int main () {

    int signed x;
    int signed y;

    std::cout << "Pls, enter two numbers" << std::endl;

    std::cin >> x;
    std::cin >> y;

    if (x == 10 && y == 10) {
        std::cout << "True" << std::endl;
    } else if (x != 10 && y != 10 && (x + y) == 10) {
        std::cout << "True" << std::endl;
    } else if (x == 0 && y == 10) {
        std::cout << "True" << std::endl;
    } else if (x == 10 && y == 0) {
        std::cout << "True" << std::endl;
    } else if (x != 10 && y != 10 && (x + y) != 10) {
        std::cout << "False" << std::endl;
    } else if (x == 10 && y != 10 && (x + y) != 10) {
        std::cout << "False" << std::endl;
    } else if (x != 10 && y == 10 && (x + y) != 10) {
        std::cout << "False" << std::endl;
    }

    return 0;
}