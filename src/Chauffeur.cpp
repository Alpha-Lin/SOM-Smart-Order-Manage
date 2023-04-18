#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Chauffeur : public Personne{
    public:
        Chauffeur(string nom, string prenom, string adresse, string email);
        void ajoutTrajet(Trajet trajet);
        void modificationTrajet(Trajet trajet);
        void suppressionTrajet(int idtrajet);
        static int nbChauffeur;
    private:
        int idchauffeur;
        vector<Trajet> trajets;
};

int Chauffeur::nbChauffeur = 0;

Chauffeur::Chauffeur(string nom, string prenom, string adresse, string email) : Personne(nom, prenom, adresse, email){
    idchauffeur = nbChauffeur++;
}

void Chauffeur::ajoutTrajet(Trajet trajet){
    trajets.push_back(trajet);
}

void Chauffeur::modificationTrajet(Trajet trajet){
    for(int i = 0; i < vec.size() - 1; i++){
        if(trajets[i].getIdTrajet() == idtrajet){
            trajets[i].setVilledepart(trajet.getVilledepart());
            trajets[i].setVillearrivee(trajet.getVillearrivee());
            trajets[i].setHorairedepart(trajet.getHorairedepart());
            trajets[i].setHorairearrivee(trajet.getHorairearrivee());
            trajet[i].setPoids(trajet.getPoids());
            trajets[i].setStatus(trajet.getStatus());
            return;
        }
    }
}

void Chauffeur::suppressionTrajet(int idtrajet){
    for(int i = 0; i < vec.size() - 1; i++){
        if(trajets[i].getIdTrajet() == idtrajet){
            trajets.erase(i);
            return;
        }
    }
}
