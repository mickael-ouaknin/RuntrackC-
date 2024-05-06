#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;

struct Destination {
    string nom;
    int tempsDeVol;
};

int main() {
    vector<Destination*> destinations; 

    char continuer;
    do {
        Destination* nouvelleDestination = new Destination; 

        cout << "Entrez le nom de la destination : ";
        cin >> nouvelleDestination->nom;

        cout << "Entrez le temps de vol depuis Marseille : ";
        cin >> nouvelleDestination->tempsDeVol;

        destinations.push_back(nouvelleDestination); 

        cout << "Voulez-vous ajouter une autre destination ? (o/n) : ";
        cin >> continuer;
    } while (continuer == 'o' || continuer == 'O');

    cout << "Destinations et temps de vol depuis Marseille :" << endl;
    for (size_t i = 0; i < destinations.size(); ++i) {
        cout << "Destination : " << destinations[i]->nom << ", Temps de vol : " << destinations[i]->tempsDeVol << " heures" << endl;
    }

    for (size_t i = 0; i < destinations.size(); ++i) {
        cout << "Entrez le nouveau temps de vol pour " << destinations[i]->nom << " : ";
        cin >> destinations[i]->tempsDeVol;
    }

    cout << "Destinations et temps de vol mis à jour :" << endl;
    for (size_t i = 0; i < destinations.size(); ++i) {
        cout << "Destination : " << destinations[i]->nom << ", Temps de vol : " << destinations[i]->tempsDeVol << " heures" << endl;
    }

    for (size_t i = 0; i < destinations.size(); ++i) {
        delete destinations[i];
    }

    return 0;
}
