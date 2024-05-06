#include <iostream>
#include <cmath>

int main() {
    double nombre;

    while (true) {
        std::cout << "Entrez un nombre (0 pour quitter) : ";
        std::cin >> nombre;

        if (nombre == 0) {
            std::cout << "Programme termine." << std::endl;
            break;
        }

        if (nombre < 0) {
            std::cout << "svp positif" << std::endl;
        } else {
            double racine_carree = sqrt(nombre);
            std::cout << "La racine carree de " << nombre << " est : " << racine_carree << std::endl;
        }
    }

    return 0;
}
