#include <iostream>

int main() {
    int nombre, inverse = 0;
    
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;
    
    // Inversion du nombre
    while (nombre != 0) {
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }
    
    std::cout << "Le nombre inverse est : " << inverse << std::endl;
    
    return 0;
}
