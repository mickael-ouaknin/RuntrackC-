#include <iostream>

using namespace std;

int main() {
    int tableau[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        cout << "Adresse memoire de tableau[" << i << "] : " << &tableau[i] << ", valeur : " << tableau[i] << endl;
    }

    return 0;
}
