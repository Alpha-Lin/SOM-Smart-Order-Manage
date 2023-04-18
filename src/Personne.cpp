#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

class Personne{
    public:
        Personne(string nom, string prenom, string adresse, string email);
        string getNom();
        string getPrenom();
        string getAdresse();
        string getEmail();
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

Personne(string nom, string prenom, string adresse, string email, string motDePasse){
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->email = email;
    this->motDePasse = motDePasse;
}

string Personne::getNom(){
    return nom;
}

string Personne::getPrenom(){
    return prenom;
}

string Personne::getAdresse(){
    return adresse;
}

string Personne::getEmail(){
    return email;
}

string Personne::getMotDePasse(){
    return motDePasse;
}

void Personne::setNom(string nom){
    this->nom = nom;
}

void Personne::setPrenom(string prenom){
    this->prenom = prenom;
}

void Personne::setAdresse(string adresse){
    this->adresse = adresse;
}

void Personne::setEmail(string email){
    this->email = email;
}

void Personne::setMotDePasse(string motDePasse){
    this->motDePasse = motDePasse;
}

vector<Personne> Personne::readPersonnes(){
    vector<Trajet> personnes;

    fUtilisateurs.open("utilisateurs.csv", ios::in);

    while(getline(fUtilisateurs, personne))
        personnes.push_back(personne);

    fUtilisateurs.close();

    return personnes;
}

void ajoutPersonne(Personne personne){
    fTrajets.open("utilisateurs.csv", ios::out | ios::app);

    fTrajets << personne.getNom() << "; "
             << personne.getPrenom() << "; "
             << personne.getAdresse() << "; "
             << personne.getEmail() << "; "
             << personne.getMotDePasse()
             << "\n";

    fTrajets.close();
}

void sauvegarderPersonnes(vector<Personne> personnes){
    fTrajets.open("utilisateurs.csv", ios::out | ios::app);

    for(int i = 0; i < personnes.size() - 1; i++){
        fTrajets << personne.getNom() << "; "
                 << personne.getPrenom() << "; "
                 << personne.getAdresse() << "; "
                 << personne.getEmail() << "; "
                 << personne.getMotDePasse()
                 << "\n";
    }

    fTrajets.close();
}
