#include <iostream>

int main() {
    int nb1;
    int nb2;
    int result;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> nb1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nb2;

    result = nb1 * nb2;
    std::cout << "Le resultat est : " << result;

    return 0;
}
