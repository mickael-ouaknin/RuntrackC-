#include <iostream>
#include <string>

using namespace std;

struct Staff {
    string nom;
    string prenom;
};

struct Etudiant {
    string nom;
    string prenom;
};

int main() {
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    cout << "Prenoms du personnel :" << endl;
    cout << alicia.prenom << endl;
    cout << pierre.prenom << endl;

    int nombreEtudiants;
    cout << "Entrez le nombre d'etudiants : ";
    cin >> nombreEtudiants;
    
    Etudiant etudiants[nombreEtudiants];

    for (int i = 0; i < nombreEtudiants; ++i) {
        cout << "Entrez le nom de l'etudiant " << i + 1 << " : ";
        cin >> etudiants[i].nom;
        cout << "Entrez le prenom de l'etudiant " << i + 1 << " : ";
        cin >> etudiants[i].prenom;
    }

    cout << "Prenoms des etudiants :" << endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        cout << etudiants[i].prenom << endl;
    }

    return 0;
}
