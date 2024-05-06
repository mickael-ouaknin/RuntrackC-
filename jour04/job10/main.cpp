#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Note {
    string nom;
    string prenom;
    double note;
};

void ajouterNote(vector<Note> &listeNotes) {
    Note nouvelleNote;
    cout << "Nom de l'etudiant : ";
    cin >> nouvelleNote.nom;
    cout << "Prenom de l'etudiant : ";
    cin >> nouvelleNote.prenom;
    cout << "Note de l'etudiant : ";
    cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
}

void afficherListeNotes(const vector<Note> &listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste est vide." << endl;
        return;
    }
    cout << "Liste des notes :" << endl;
    for (const auto &note : listeNotes) {
        cout << note.nom << " " << note.prenom << " : " << note.note << endl;
    }
}

void supprimerNote(vector<Note> &listeNotes) {
    string nom, prenom;
    cout << "Nom de l'etudiant dont vous souhaitez supprimer la note : ";
    cin >> nom;
    cout << "Prenom de l'etudiant : ";
    cin >> prenom;

    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            it = listeNotes.erase(it);
            cout << "Note de l'etudiant supprimee avec succes." << endl;
            return;
        }
    }
    cout << "Aucune note trouvee pour cet etudiant." << endl;
}

void afficherMoyenne(const vector<Note> &listeNotes) {
    if (listeNotes.empty()) {
        cout << "Aucune note disponible pour calculer la moyenne." << endl;
        return;
    }

    double somme = 0.0;
    for (const auto &note : listeNotes) {
        somme += note.note;
    }
    double moyenne = somme / listeNotes.size();
    cout << "La moyenne des notes est : " << moyenne << endl;
}

int main() {
    vector<Note> listeNotes;
    int choix;

    do {
        cout << "\nMenu :" << endl;
        cout << "1. Ajouter une note" << endl;
        cout << "2. Afficher la liste de notes" << endl;
        cout << "3. Supprimer une note d'un etudiant" << endl;
        cout << "4. Afficher la moyenne des notes" << endl;
        cout << "5. Quitter" << endl;
        cout << "Choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                afficherMoyenne(listeNotes);
                break;
            case 5:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez reessayer." << endl;
        }
    } while (choix != 5);

    return 0;
}
