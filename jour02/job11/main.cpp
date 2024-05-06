#include <iostream>

unsigned long long calculerFactorielle(int n) {
    if (n < 0) {
        std::cerr << "Erreur : La factorielle n'est definie que pour les entiers positifs ou nuls." << std::endl;
        return 0;
    }

    unsigned long long resultat = 1;
    for (int i = 1; i <= n; ++i) {
        resultat *= i; 
    }
    return resultat;
}

int main() {
    int nombre;

    std::cout << "Entrez un nombre entier pour calculer sa factorielle : ";
    std::cin >> nombre;

    std::cout << nombre << "! = " << calculerFactorielle(nombre) << std::endl;

    return 0;
}
