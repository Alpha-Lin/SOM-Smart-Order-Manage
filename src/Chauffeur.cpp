#include "Personne.hpp"
#include "Trajet.hpp"

using namespace std;

class Chauffeur : public Personne{
    public:
        Chauffeur(string nom, string prenom, string adresse, string email, string motDePasse);
        void ajoutTrajet(Trajet trajet);
        void modificationTrajet(Trajet trajet);
        void suppressionTrajet(int idtrajet);
    private:
        vector<Trajet> trajets;
        
};

Chauffeur::Chauffeur(string nom, string prenom, string adresse, string email, string motDePasse) : Personne(CHAUFFEUR, nom, prenom, adresse, email, motDePasse){
    trajets = Trajet::readTrajetsByChauffeur(getId());
}

void Chauffeur::ajoutTrajet(Trajet trajet){
    trajets.push_back(trajet);

    Trajet::ajoutTrajet(trajet);
}

void Chauffeur::modificationTrajet(Trajet trajet){
    for(int i = 0; i < trajets.size() - 1; i++){
        if(trajets[i].getIdTrajet() == trajet.getIdTrajet()){
            trajets[i].setVilledepart(trajet.getVilledepart());
            trajets[i].setVillearrivee(trajet.getVillearrivee());
            trajets[i].setHorairedepart(trajet.getHorairedepart());
            trajets[i].setHorairearrivee(trajet.getHorairearrivee());
            trajets[i].setPoids(trajet.getPoids());
            trajets[i].setStatus(trajet.getStatus());

            Trajet::sauvegarderTrajets(trajets);

            return;
        }
    }
}

void Chauffeur::suppressionTrajet(int idtrajet){
    for(int i = 0; i < trajets.size() - 1; i++){
        if(trajets[i].getIdTrajet() == idtrajet){
            trajets.erase(trajets.begin() + i);

            Trajet::sauvegarderTrajets(trajets);

            return;
        }
    }
}
