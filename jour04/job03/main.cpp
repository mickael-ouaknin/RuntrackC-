#include <iostream>
#include <cstring>

void inverserChaine(char* chaine) {
    int longueur = strlen(chaine);

    char* debut = chaine;
    char* fin = chaine + longueur - 1;

    while (debut < fin) {
        char temp = *debut;
        *debut = *fin;
        *fin = temp;

        debut++;
        fin--;
    }
}

int main() {
    const int MAX_TAILLE = 100;
    char chaine[MAX_TAILLE];

    std::cout << "Entrez une chaine de caracteres : ";
    std::cin.getline(chaine, MAX_TAILLE);

    inverserChaine(chaine);

    std::cout << "La chaine inversee est : " << chaine << std::endl;

    return 0;
}
