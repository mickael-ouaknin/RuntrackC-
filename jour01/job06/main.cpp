#include <iostream>

int main() {
    int entier;

    std::cout << "Entrez un entier : ";
    std::cin >> entier;

    std::cout << "Table de multiplication de " << entier << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << entier << " * " << i << " = " << entier * i << std::endl;
    }

    return 0;
}
