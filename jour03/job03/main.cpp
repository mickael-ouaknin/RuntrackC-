#include <iostream>
#include <string>
using namespace std;

int comparerChaines(string& chaine1, string& chaine2) {
    
    if (chaine1.length() != chaine2.length()) {
        return 1; 
    }

    for (size_t i = 0; i < chaine1.length(); ++i) {
        if (chaine1[i] != chaine2[i]) {
            return 1; 
        }
    }

    return 0;
}

int main() {
    string chaine1, chaine2;
    
    cout << "Entrez la premiere chaine : ";
    getline(cin, chaine1);
    cout << "Entrez la deuxieme chaine : ";
    getline(cin, chaine2);
    
    int resultat = comparerChaines(chaine1, chaine2);
    if (resultat == 0) {
        cout << "Les chaines sont identiques." << endl;
    } else {
        cout << "Les chaines sont differentes." << endl;
    }

    return 0;
}
