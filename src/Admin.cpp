

class Admin : public Personne {
    private:
    int id;

    public:
    Admin(int id, string nom, string prenom, string adresse, string telephone,);
    int getIdAdmin();
    void setIdAdmin(int id);
    int nombreColisLivresChauffeur(int idChauffeur)
};
    int Admin::getIdAdmin() const {
        return id;
    }

    void Admin::setIdAdmin(int id) {
        id = id;
    }
    int Admin::nombreColisLivresChauffeur(int idChauffeur) {
        int nombreColisLivres = 0;
        vector<Trajet> trajets = Trajet::readTrajets();

        for (auto& trajet : trajets) {
            // verification que le trajet a etais effectuer
            if (trajet.getIdChauffeur() == idChauffeur && trajet.getStatus() == 2) {
                nombreColisLivres += trajet.getListeColis().size();
            }
        }
        // Retourne le nombre total de colis livrés par le chauffeur spécifié
        return nombreColisLivres;
    }
        }
    }