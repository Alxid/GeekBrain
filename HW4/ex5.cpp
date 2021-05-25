#include <iostream>

int main () {

    int year;

    std::cout << "Type the year" << std::endl;
    std::cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << "Year is leap" << std::endl;
    } else {
        std::cout << "Year is not leap" << std::endl;
    }

    return 0;
}