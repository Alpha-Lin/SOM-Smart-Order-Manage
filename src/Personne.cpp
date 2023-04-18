#include <iostream>

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
    private:
        string nom;
        string prenom;
        string adresse;
        string email;
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

string Personne::getEmail(){
    return email;
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

}
