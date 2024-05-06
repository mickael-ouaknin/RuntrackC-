#include <iostream>
#include <cstring>

int main() {
    const int tailleMax = 50; 
    char tab[tailleMax]; 
    std::cout << "Entrez une chaine de caracteres: ";
    std::cin.getline(tab, tailleMax); 
    
    std::cout << "Les caracteres de la chaine sont : ";
    for (int i = 0; tab[i] != '\0'; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
