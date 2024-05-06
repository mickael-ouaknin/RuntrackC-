#include <iostream>

using namespace std;

void fusionnerTableaux(int* tableau1, int taille1,int* tableau2, int taille2, int* resultat) {
    int i = 0, j = 0, k = 0;

    while (i < taille1 && j < taille2) {
        if (tableau1[i] < tableau2[j]) {
            resultat[k++] = tableau1[i++];
        } else {
            resultat[k++] = tableau2[j++];
        }
    }

    while (i < taille1) {
        resultat[k++] = tableau1[i++];
    }

    while (j < taille2) {
        resultat[k++] = tableau2[j++];
    }
}

int main() {
    int tableau1[] = {1, 3, 5, 7, 9};
    int taille1 = sizeof(tableau1) / sizeof(tableau1[0]);

    int tableau2[] = {2, 4, 6, 8, 10};
    int taille2 = sizeof(tableau2) / sizeof(tableau2[0]);

    int tailleResultat = taille1 + taille2;
    int resultat[tailleResultat];

    fusionnerTableaux(tableau1, taille1, tableau2, taille2, resultat);

    cout << "Tableau fusionne en ordre croissant : ";
    for (int i = 0; i < tailleResultat; ++i) {
        cout << resultat[i] << " ";
    }
    cout << endl;

    return 0;
}
