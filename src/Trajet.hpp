#ifndef DEF_TRAJET
#define DEF_TRAJET

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

//TODO : str to time_t

class Trajet{
    public:
        Trajet(int idchauffeur, string villedepart, string villearrivee, time_t horairedepart, time_t horairearrivee, double poids, int status);
        Trajet(int idtrajet, int idchauffeur, string villedepart, string villearrivee, time_t horairedepart, time_t horairearrivee, double poids, int status);
        int getIdTrajet();
        int getIdChauffeur();
        string getVilledepart();
        string getVillearrivee();
        time_t getHorairedepart();
        time_t getHorairearrivee();
        double getPoids();
        int getStatus();
        void setVilledepart(string villedepart);
        void setVillearrivee(string villearrivee);
        void setHorairedepart(time_t horairedepart);
        void setHorairearrivee(time_t horairearrivee);
        void setPoids(double poids);
        void setStatus(int status);
        static vector<Trajet> readTrajets();
        static void ajoutTrajet(Trajet trajet);
        static void sauvegarderTrajets(vector<Trajet> trajets);
    private:
        int idtrajet;
        int idchauffeur;
        string villedepart;
        string villearrivee;
        time_t horairedepart;
        time_t horairearrivee;
        double poids;
        int status;
        static fstream fTrajets;
};

#endif
