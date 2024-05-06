#include <iostream>

int main() {
    int n, m, temp;

    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;
    std::cout << "Entrez la valeur de m : ";
    std::cin >> m;

    std::cout << "Avant l'echange :\n";
    std::cout << "n = " << n << std::endl;
    std::cout << "m = " << m << std::endl;
    
    temp = n;
    n = m;
    m = temp;

    std::cout << "\nApres l'echange :\n";
    std::cout << "n = " << n << std::endl;
    std::cout << "m = " << m << std::endl;

    return 0;
}
