#include <iostream>

int main() {
    char operateur;
    float nombre1, nombre2, resultat;

    std::cout << "Choisissez l'operation (+, -, *, /) : ";
    std::cin >> operateur;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxieme nombre : ";
    std::cin >> nombre2;

    switch (operateur) {
        case '+':
            resultat = nombre1 + nombre2;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            break;
        case '/':
            if (nombre2 != 0)
                resultat = nombre1 / nombre2;
            else {
                std::cout << "Erreur: Division par zero\n";
                return 1;
            }
            break;
        default:
            std::cout << "Operateur invalide!\n";
            return 1; 
    }

    std::cout << "Resultat : " << resultat << std::endl;

    return 0; 
}
