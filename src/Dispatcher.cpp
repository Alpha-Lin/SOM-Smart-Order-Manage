#include "Dispatcher.hpp"

Dispatcher::Dispatcher(string nom, string prenom, string adresse, string email, string motDePasse) : Personne(DISPATCHER, nom, prenom, adresse, email, motDePasse){
    colis = Colis::readColis();
}

void Dispatcher::dispatch() {
    //la fonction doit affecter les colis de la liste aux trajet. ca doit etre fait en fonction de la ville et du poids

    vector<Trajet> trajets = Trajet::readTrajets();
    vector<Colis> colis = Colis::readColis();

    for (auto& trajet : trajets) {
        // Parcourir les colis
        for (auto& c : colis) {
            // verifie si la ville de destination correspond à la ville d'arrivée du trajet
            if (c.getvilleArr() == trajet.getVillearrivee()) {
                // verifie si le poids du colis est inférieur à la capacité restante du trajet
                if (c.getPoids() <= trajet.poidsActuel()) {
                    // affecte le colis au trajet
                    c.setIdTrajet(trajet.getIdTrajet());
                    trajet.ajoutColis(c);
                    trajet.setStatus(SOLLICITE);
                    c.setstatus(SOLLICITE);
                    c.setIdTrajet(trajet.getIdTrajet());
                }
            }
        }
    }
    //sauvegarde des modification
    Trajet::sauvegarderTrajets(trajets);
    Colis::sauvegarderColis(colis);
}


void Dispatcher::remplir() {
    // la fonction cree une liste de 10 colis aleatoire
    for (int i = 0; i < 10; i++) {
        string ville = "ville_" + to_string(i); // générer une ville aléatoire
        string date = "date_" + to_string(i); // générer une date aléatoire
        Colis c(ville, date, AJOUTE); // créer un nouvel objet Colis
        colis.push_back(c); // ajouter l'objet Colis au vecteur colis

        // écrire les informations du colis dans le fichier CSV en utilisant la fonction ajoutColis
        Colis::ajoutColis(c);
    }
}


