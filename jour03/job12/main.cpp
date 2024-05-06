#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));
    int nombreMystere = rand() % 101;

    int chances = 5;
    int nombreJoueur;

    cout << "Bienvenue dans le jeu du Nombre Mystere !" << endl;
    cout << "Devinez un nombre entre 0 et 100." << endl;

    while (chances > 0) {
        cout << "Il vous reste " << chances << " chances. Entrez votre proposition : ";
        cin >> nombreJoueur;

        if (nombreJoueur < nombreMystere) {
            cout << "Trop petit !" << endl;
        } else if (nombreJoueur > nombreMystere) {
            cout << "Trop grand !" << endl;
        } else {
            cout << "Bravo ! Vous avez trouvé le nombre mystère !" << endl;
            return 0;
        }

        chances--;
    }

    cout << "Desole, vous avez epuise toutes vos chances. Le nombre mystere était : " << nombreMystere << endl;

    return 0;
}
