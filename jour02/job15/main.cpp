#include <iostream>

int main() {
    int limite;
    
    std::cout << "Entrez la limite de la suite de Fibonacci : ";
    std::cin >> limite;

    int terme1 = 0;
    int terme2 = 1;
    int termeSuivant;

    std::cout << "Suite de Fibonacci jusqu'à la limite " << limite << " : ";

    while (terme1 <= limite) {
        std::cout << terme1 << " ";
        termeSuivant = terme1 + terme2;
        terme1 = terme2;
        terme2 = termeSuivant;
    }

    std::cout << std::endl;

    return 0;
}
