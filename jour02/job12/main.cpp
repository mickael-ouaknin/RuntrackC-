#include <iostream>

double sommeHarmonique(int n) {
    double somme = 0.0;
    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }
    return somme;
}

int main() {
    int n;

    std::cout << "Entrez un nombre entier n pour calculer la somme des n premiers termes de la serie harmonique : ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Erreur : n doit etre un entier positif." << std::endl;
        return 1; 
    }
   
    std::cout << "La somme des " << n << " premiers termes de la serie harmonique est : " << sommeHarmonique(n) << std::endl;

    return 0;
}
