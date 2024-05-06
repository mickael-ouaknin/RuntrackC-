#include <iostream>
#pragma once
using namespace std;

int trouverMax(int T[], int taille) {
    if (taille == 0) {
        return INT_MIN;
    }

    int max = T[0];

    for (int i = 1; i < taille; ++i) {
        if (T[i] > max) {
            max = T[i];
        }
    }

    return max;
}

int main() {
    int tableau[] = {6, 15, 4, 65, 31, 12};

    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int valeurMax = trouverMax(tableau, taille);

    cout << "La valeur maximale du tableau est : " << valeurMax << endl;

    return 0;
}
