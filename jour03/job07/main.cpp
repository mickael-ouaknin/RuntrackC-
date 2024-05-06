#include <iostream>
using namespace std;

int main() {
    const int taille = 10;
    int T[taille];
    int indiceMax = 0;

    cout << "Veuillez saisir 10 entiers :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Entier " << i+1 << " : ";
        cin >> T[i];
    }

    for (int i = 1; i < taille; ++i) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }

    cout << "L'indice du plus grand element est : " << indiceMax << endl;

    return 0;
}
