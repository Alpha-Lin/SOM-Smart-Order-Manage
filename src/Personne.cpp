#include <iostream>

using namespace std;

class Personne{
    public:
        Personne(string nom, string prenom, string adresse);
        string getNom();
        string getPrenom();
        string getAdresse();
        void setNom(string nom);
        void setPrenom(string prenom);
        void setAdresse(string adresse);
    private:
        string nom;
        string prenom;
        string adresse;
};

Personne(string nom, string prenom, string adresse){
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
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

void Personne::setNom(string nom){
    this->nom = nom;
}

void Personne::setPrenom(string prenom){
    this->prenom = prenom;
}

void Personne::setAdresse(string adresse){
    this->adresse = adresse;
}
