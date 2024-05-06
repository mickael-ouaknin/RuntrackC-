#include <iostream>
#include <string>

using namespace std;

bool estIncluse(const string& chaine1, const string& chaine2) {
    return chaine2.find(chaine1) != string::npos;
}


int main() {
    string chaine1, chaine2;

    cout << "Entrez la premiere chaine de caracteres : ";
    getline(cin, chaine1);

    cout << "Entrez la deuxieme chaine de caracteres : ";
    getline(cin, chaine2);

    if (estIncluse(chaine1, chaine2)) {
        cout << "La premiere chaîne est incluse dans la deuxieme." << endl;
    } else {
        cout << "La premiere chaine n'est pas incluse dans la deuxieme." << endl;
    }
    return 0;
}
