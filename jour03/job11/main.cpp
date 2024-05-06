#include <iostream>

using namespace std;

int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) {  
            somme += tableau[i]; 
        }
    }
    return somme;
}

int main() {
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int tableau[taille];
    cout << "Entrez les éléments du tableau : ";
    for (int i = 0; i < taille; ++i) {
        cin >> tableau[i];
    }

    int sommePairs = sommeElementsPairs(tableau, taille);

    cout << "La somme des éléments pairs du tableau est : " << sommePairs << endl;

    return 0;
}
