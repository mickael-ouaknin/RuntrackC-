#include <iostream>
#include <vector>

using namespace std;

int main() {
    int taille;

    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    vector<int> tableau(taille);

    cout << "Entrez les valeurs pour le tableau :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    cout << "Contenu du tableau :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
