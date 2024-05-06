#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez la borne inferieure (a) : ";
    std::cin >> a;

    std::cout << "Entrez la borne superieure (b) : ";
    std::cin >> b;

    if (a <= b) {
        std::cout << "Entiers de " << a << " a " << b << " : ";
        for (int i = a; i <= b; ++i) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "La borne inferieure doit etre inferieure ou egale a la borne superieure." << std::endl;
    }

    return 0;
}
