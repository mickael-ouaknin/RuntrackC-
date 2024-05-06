#include <iostream>
#include <cmath>

int nombreDeChiffres(int nombre) {
    int count = 0;
    while (nombre != 0) {
        nombre /= 10;
        count++;
    }
    return count;
}

bool estNombreNarcissique(int nombre) {
    int original = nombre;
    int somme = 0;
    int puissance = nombreDeChiffres(nombre);

    while (nombre != 0) {
        int chiffre = nombre % 10;
        somme += pow(chiffre, puissance);
        nombre /= 10;
    }

    return somme == original;
}

int main() {
    int nombre;

    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    if (estNombreNarcissique(nombre)) {
        std::cout << nombre << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << nombre << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}
