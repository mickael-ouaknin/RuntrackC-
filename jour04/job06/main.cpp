#include <iostream>

using namespace std;

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    char caractere[] = "La Plateforme";

    cout << "Adresse memoire de 'entier' : " << &entier << ", valeur : " << entier << endl;
    cout << "Adresse memoire de 'flottant' : " << &flottant << ", valeur : " << flottant << endl;
    cout << "Adresse memoire de 'reel' : " << &reel << ", valeur : " << reel << endl;
    cout << "Adresse memoire de 'caractere' : " << static_cast<void*>(&caractere) << ", valeur : " << caractere << endl;

    return 0;
}
