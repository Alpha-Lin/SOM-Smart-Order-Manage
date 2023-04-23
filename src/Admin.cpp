#include "Personne.hpp"
#include "Trajet.hpp"

class Admin : public Personne {
    public:
        Admin(string nom, string prenom, string adresse, string email, string motDePasse);
        int nombreColisLivresChauffeur(int idChauffeur);
};

int Admin::nombreColisLivresChauffeur(int idChauffeur) {
    int nombreColisLivres = 0;
    vector<Trajet> trajets = Trajet::readTrajets();

    for (auto& trajet : trajets) {
        // verification que le trajet a etais effectuer
        if (trajet.getIdChauffeur() == idChauffeur && trajet.getStatus() == 2) {
            nombreColisLivres += trajet.getNbColis();
        }
    }
    // Retourne le nombre total de colis livrés par le chauffeur spécifié
    return nombreColisLivres;
}
