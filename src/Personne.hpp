#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Personne{
    public:
        Personne(string nom, string prenom, string adresse, string email, string motDePasse);
        string getNom();
        string getPrenom();
        string getAdresse();
        string getEmail();
        string getMotDePasse();
        void setNom(string nom);
        void setPrenom(string prenom);
        void setAdresse(string adresse);
        void setEmail(string email);
        void setMotDePasse(string motDePasse);
        static vector<Personne> readPersonnes();
        static void ajoutPersonne(Personne personne);
        static void sauvegarderPersonnes(vector<Personne> personnes);
    private:
        string nom;
        string prenom;
        string adresse;
        string email;
        string motDePasse;
        static fstream fPersonnes;
};
 
#endif
