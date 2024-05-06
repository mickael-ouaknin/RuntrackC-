#include <iostream>

int main() {
    int a, b, entier;

    std::cout << "Entrez la borne inferieure (a) : ";
    std::cin >> a;

    std::cout << "Entrez la borne superieure (b) : ";
    std::cin >> b;

    if (a < b) {
        std::cout << "Entrez un entier : ";
        std::cin >> entier;

        if (entier >= a && entier <= b) {
            std::cout << "GAGNE" << std::endl;
        } else {
            std::cout << "PERDU" << std::endl;
        }
    } else {
        std::cout << "La borne inferieure doit etre strictement inferieure a la borne superieure." << std::endl;
    }

    return 0;
}
