#include <iostream>
#include <string>
using namespace std;

int main() {
    string chaine = "vive la plateforme !";
    string voyelles = "aeiouAEIOU";
    string chaine_sans_voyelles = "";

    for (char& c : chaine) {
        if (voyelles.find(c) == string::npos) {
            chaine_sans_voyelles += c;
        }
    }

    cout << "Chaîne originale: " << chaine << endl;
    cout << "Chaîne sans voyelles: " << chaine_sans_voyelles << endl;

    return 0;
}
