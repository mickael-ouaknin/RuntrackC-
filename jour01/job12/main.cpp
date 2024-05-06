#include <iostream>

int main() {
    int somme = 0;
    int entier;

    std::cout << "Entrez cinq entiers :\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Entier " << i + 1 << " : ";
        std::cin >> entier;
        somme += entier;
    }

    double moyenne = static_cast<double>(somme) / 5;

    std::cout << "La moyenne des entiers est : " << moyenne << std::endl;

    return 0;
}
