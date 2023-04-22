#include "Personne.hpp"

using namespace std;

int Personne::nbUsers = 0;

// Lors de la création
Personne::Personne(int role, string nom, string prenom, string adresse, string email, string motDePasse){
    this->idUser = nbUsers++;
    this->role = role;
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->email = email;
    this->motDePasse = motDePasse;
}

// Lors de la lecture
Personne::Personne(int idUser, int role, string nom, string prenom, string adresse, string email, string motDePasse){
    this->idUser = idUser;
    this->role = role;
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->email = email;
    this->motDePasse = motDePasse;
}

int Personne::getId(){
    return idUser;
}

int Personne::getRole(){
    return role;
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
    vector<Personne> personnes;

    fPersonnes.open("utilisateurs.csv", ios::in);
    
    string personneTmp;

    while(getline(fPersonnes, personneTmp)){
        stringstream personneTmpStream(personneTmp);

        vector<string> personneValues;

        string value;

        while (getline(personneTmpStream, value, ';'))
            personneValues.push_back(value);

        Personne personneNew(stoi(personneValues[0]), stoi(personneValues[1]), personneValues[2], personneValues[3], personneValues[4], personneValues[5], personneValues[6]);

        personnes.push_back(personneNew);
    }

    fPersonnes.close();

    return personnes;
}

void Personne::ajoutPersonne(Personne personne){
    fPersonnes.open("utilisateurs.csv", ios::out | ios::app);

    fPersonnes << personne.getId() << ";"
               << personne.getRole() << ";"
               << personne.getNom() << ";"
               << personne.getPrenom() << ";"
               << personne.getAdresse() << ";"
               << personne.getEmail() << ";"
               << personne.getMotDePasse()
               << "\n";

    fPersonnes.close();
}

void Personne::sauvegarderPersonnes(vector<Personne> personnes){
    fPersonnes.open("utilisateurs.csv", ios::out | ios::app);

    for(int i = 0; i < personnes.size() - 1; i++){
        fPersonnes << personnes[i].getNom() << ";"
                   << personnes[i].getPrenom() << ";"
                   << personnes[i].getAdresse() << ";"
                   << personnes[i].getEmail() << ";"
                   << personnes[i].getMotDePasse()
                   << "\n";
    }

    fPersonnes.close();
}

Personne* Personne::connexion(string email, string motDePasse){
    fPersonnes.open("utilisateurs.csv", ios::in);

    string personneTmp;

    while(getline(fPersonnes, personneTmp)){
        stringstream personneTmpStream(personneTmp);

        vector<string> personneValues;

        string value;

        while (getline(personneTmpStream, value, ';'))
            personneValues.push_back(value);

        if(personneValues[5] == email && personneValues[6] == motDePasse){
            fPersonnes.close();

            return new Personne(stoi(personneValues[0]), stoi(personneValues[1]), personneValues[2], personneValues[3], personneValues[4], personneValues[5], personneValues[6]);
        }
    }

    fPersonnes.close();

    return NULL;
}
