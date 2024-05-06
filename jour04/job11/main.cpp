#include <iostream>
#include <string>

using namespace std;

int main() {
    string fruits[] = {"pomme", "banane", "orange", "kiwi", "fraise"};

    cout << "Contenu de fruit :" << endl;
    for (const auto& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;

    int taille_favoris;
    cout << "Entrez le nombre de vos fruits favoris : ";
    cin >> taille_favoris;

    string* favoris = new string[taille_favoris];

    cout << "Entrez vos fruits favoris :" << endl;
    for (int i = 0; i < taille_favoris; ++i) {
        cout << "Fruit " << i + 1 << " : ";
        cin >> favoris[i];
    }

    cout << "Contenu de favoris :" << endl;
    for (int i = 0; i < taille_favoris; ++i) {
        cout << favoris[i] << " ";
    }
    cout << endl;

    delete[] favoris;

    return 0;
}
