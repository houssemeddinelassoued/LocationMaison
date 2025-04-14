#include <iostream>

int main() {
    std::cout << "Nombres pairs de 1 à 30 :" << std::endl;

    for (int i = 1; i <= 30; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
