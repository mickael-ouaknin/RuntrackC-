#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool estPalindrome(const string& str) {
    int debut = 0;
    int fin = str.length() - 1;
    while (debut < fin) {
        if (str[debut] != str[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    string tab[] = {"radar", "hello", "lvel", "stats", "world"};
    int taille = sizeof(tab) / sizeof(tab[0]);

    vector<string> palindromes;

    for (int i = 0; i < taille; ++i) {
        if (estPalindrome(tab[i])) {
            palindromes.push_back(tab[i]);
        }
    }

    if (palindromes.empty()) {
        cout << "Aucun palindrome trouve." << endl;
    } else {
        cout << "Palindromes trouves : ";
        for (const string& palindrome : palindromes) {
            cout << palindrome << " ";
        }
        cout << endl;
    }

    return 0;
}
