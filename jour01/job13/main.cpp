#include <iostream>

int main() {
    int N;
    int somme = 0;

    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    if (N >= 5) {
        for (int i = 5; i <= N; ++i) {
            somme += i * i * i;
        }
        std::cout << "La somme des cubes de 5^3 a " << N << "^3 est : " << somme << std::endl;
    } else {
        std::cout << " N doit etre supérieur ou égal à 5." << std::endl;
    }

    return 0;
}
