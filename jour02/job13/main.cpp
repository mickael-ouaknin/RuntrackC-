#include <iostream>

int main() {
    for (int multiplicateur = 1; multiplicateur <= 10; ++multiplicateur) {

        std::cout << "Table de multiplication pour " << multiplicateur << " :" << std::endl;

        for (int nombre = 1; nombre <= 10; ++nombre) {
            std::cout << multiplicateur << " x " << nombre << " = " << (multiplicateur * nombre) << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
