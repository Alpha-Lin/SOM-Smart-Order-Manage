#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#define ADMIN 0
#define CHAUFFEUR 1
#define DISPATCHER 2

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Personne{
    public:
        Personne(int role, string nom, string prenom, string adresse, string email, string motDePasse);
        Personne(int idUser, int role, string nom, string prenom, string adresse, string email, string motDePasse);
        int getId();
        int getRole();
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
        static Personne* connexion(string email, string motDePasse);
        static void ajoutPersonne(Personne personne);
        static void sauvegarderPersonnes(vector<Personne> personnes);
        static Personne* utilisateur;
    private:
        int idUser;
        int role;
        string nom;
        string prenom;
        string adresse;
        string email;
        string motDePasse;
        static fstream fPersonnes;
        static int nbUsers;
};
 
#endif
