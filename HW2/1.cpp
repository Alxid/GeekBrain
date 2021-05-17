#include <iostream>

int main() {

    int a = 92;
    long b = 1123654;
    short c = -8;
    unsigned d = 4;
    char letter = 'B';
    float count = 1.9865;
    double doubleCount;
    doubleCount = 11.654987;

    enum xol {x, o, m, p};
    // x - крестик
    // o - нолик
    // m - простановка там, где крестики выиграли (замена трех крестиков)
    // p - простановка там, где нолики выиграли (замена трех ноликов)

    char xow[5] = {'x', 'o', 'm', 'p', '\0'};

    struct game {
        int playerID[2]; // номер игрока (1, 2)
        int actID; // номер хода
        int actData[2]; // дийствие пользователя (х или о)
        int playerPos[3][3]; // место, куда пользователь установил х или о
    };

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << letter << std::endl;
    std::cout << count << std::endl;
    std::cout << doubleCount << std::endl;

    return 0;
}