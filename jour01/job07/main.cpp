#include <iostream>

int main() {
    int entier;

    std::cout << "Entrez un nombre entier : ";
    std::cin >> entier;

    if (entier % 2 == 0) {
        std::cout << entier << " est un nombre pair." << std::endl;
    } else {
        std::cout << entier << " est un nombre impair." << std::endl;
    }

    return 0;
}
