#include <iostream>
#include <string>
using namespace std;

bool verifierFormatHeure(string& heure) {
    if (heure.length() != 5)
        return false;

    if (!isdigit(heure[0]) || !isdigit(heure[1]) || heure[2] != 'h')
        return false;

    if (!isdigit(heure[3]) || !isdigit(heure[4]))
        return false;

    return true;
}

int main() {
    string heure;

    cout << "Veuillez entrer une heure sous le format XXhXX : ";
    getline(cin, heure);

    if (verifierFormatHeure(heure)) {
        cout << "Format d'heure valide.";
    } else {
        cout << "Format d'heure invalide. Assurez-vous d'utiliser le format XXhXX.";
    }

    return 0;
}
