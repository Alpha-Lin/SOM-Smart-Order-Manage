#ifndef DEF_TRAJET
#define DEF_TRAJET

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Colis.hpp"

using namespace std;

#define CREE 0
#define SOLLICITE 1
#define ACCEPTE 2
#define EN_COURS 3
#define COMPLETE 4

class Trajet{
    public:
        Trajet(int idchauffeur, string villedepart, string villearrivee, string horairedepart, string horairearrivee, double poids, int status);
        Trajet(int idtrajet, int idchauffeur, string villedepart, string villearrivee, string horairedepart, string horairearrivee, double poids, int status);
        int getIdTrajet();
        int getIdChauffeur();
        string getVilledepart();
        string getVillearrivee();
        string getHorairedepart();
        string getHorairearrivee();
        double getPoids();
        int getStatus();
        void setVilledepart(string villedepart);
        void setVillearrivee(string villearrivee);
        void setHorairedepart(string horairedepart);
        void setHorairearrivee(string horairearrivee);
        void setPoids(double poids);
        void setStatus(int status);
        void ajoutColis(Colis c);
        double poidsActuel();
        int getNbColis();
        static vector<Trajet> readTrajets();
        static vector<Trajet> readTrajetsByChauffeur(int idChauffeur);
        static void ajoutTrajet(Trajet trajet);
        static void sauvegarderTrajets(vector<Trajet> trajets);
        static int nbTrajets;
    private:
        int idtrajet;
        int idchauffeur;
        string villedepart;
        string villearrivee;
        string horairedepart;
        string horairearrivee;
        double poids;
        int status;
        vector<Colis> colis;
        static fstream fTrajets;
};

#endif
