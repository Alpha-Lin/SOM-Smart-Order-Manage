#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Colis.hpp"
#include "Personne.hpp"

using namespace std;

class Dispatcher {
    private:
    vector<Colis> colis;

    public:
    Dispatcher(int idDispat);
    void setID(int id);
    int getID();
    void remplir();
    void dispatch();
};

Dispatcher::Dispatcher(string nom, string prenom, string adresse, string email, string motDePasse) : Personne(DISPATCHER, nom, prenom, adresse, email, motDePasse){
    colis = Colis::readColis();
}

void Dispatcher::getID() {
    return idDispat;
}
void Dispatcher::setID(int id) {
    idDispat = id;
}

void Dispatcher::dispatch() {
    //la fonction doit affecter les colis de la liste aux trajet. ca doit etre fait en fonction de la ville et du poids
}

void Dispatcher::remplir() {
    for (int i = 0; i < 10; i++) {
        string ville = "ville_" + to_string(i); // générer une ville aléatoire
        string date = "date_" + to_string(i); // générer une date aléatoire
        Colis c(id, ville, date, AJOUTE); // créer un nouvel objet Colis
        colis.push_back(c); // ajouter l'objet Colis au vecteur colis

        // écrire les informations du colis dans le fichier CSV en utilisant la fonction ajoutColis
        ajoutColis(c);
    }
}
