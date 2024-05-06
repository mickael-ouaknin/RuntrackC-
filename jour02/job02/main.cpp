#include <iostream>

int main() {
    int n;    
    
    std::cin >> n;
    switch (n)
    {
    case 0: std::cout << "Nul\n";
    case 1:
    case 2: std::cout << "Petit\n";
                        break;
    case 3:
    case 4:
    case 5: std::cout << "Moyen\n";
    
    default: std::cout << "Grand\n";
    }

}

// si n=0, ca affiche "Nul""Petit"
// si n=1, ca affiche "Petit"
// si n=4, ca affiche "Moyen""Grand"
// si n=10, ca affiche "Grand"
// si n=-5, ca affiche "Grand"
