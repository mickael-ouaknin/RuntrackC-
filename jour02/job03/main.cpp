#include <iostream>
using namespace std;

int main() {
    int i = 0, n, somme = 0;
    somme = 0;

    while (i < 4) {
        cout << "Donnez un entier : ";
        cin >> n;
        somme += n;
        i++;
    }
    cout << "Somme : " << somme;

    return 0;
}
