#include <iostream>
using namespace std;

int main() {
    const int taille = 10;
    int T[taille];
    int compte = 0;

    cout << "Veuillez saisir 10 entiers :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Entier " << i+1 << " : ";
        cin >> T[i];
    }

    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            compte++;
        }
    }

    cout << "Le nombre d'entiers superieurs ou egaux a 5 est : " << compte << endl;

    return 0;
}
