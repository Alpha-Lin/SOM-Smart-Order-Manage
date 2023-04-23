#include "Colis.hpp"

int Colis::nbColis = 0;

// Création d'un Colis
Colis::Colis(string ville, string date, int status){
    this->idcolis = nbColis++;
    this->villearrivee = ville;
    this->dateAjoutColis = date;
    this->status = status;
    this->idTrajet = -1;
}

// Lecture d'un Colis
Colis::Colis(int id, string ville, string date, int status, int idTrajet){
    this->idcolis = id;
    this->villearrivee = ville;
    this->dateAjoutColis = date;
    this->status = status;
    this->idTrajet = idTrajet;
}

void Colis::setIdcol(int id) {
    idcolis = id;
}

int Colis::getIdCol() {
    return idcolis;
}

void Colis::setvilleArr(string ville) {
    villearrivee = ville;
}

string Colis::getvilleArr() {
    return villearrivee;
}

void Colis::setAjoutColis(int id) {
    dateAjoutColis = id;
}

void Colis::setIdTrajet(int idTrajet){
    this->idTrajet = idTrajet;
}

string Colis::getAjoutColis() {
    return dateAjoutColis;
}

void Colis::setstatus(int s) {
    status = s;
}

int Colis::getstatus() {
    return status;
}

int Colis::getIdTrajet() {
    return idTrajet;
}

vector<Colis> Colis::readColis(){
    vector<Colis> colis;

    fColis.open("colis.csv", ios::in);

    string colisTmp;

    nbColis = 0;

    while(getline(fColis, colisTmp)){
        stringstream ColisTmpStream(colisTmp);
  
        vector<string> colisValues;

        string value;

        while (getline(ColisTmpStream, value, ';'))
            colisValues.push_back(value);

        Colis ColisNew(stoi(colisValues[0]), colisValues[1], colisValues[2], stoi(colisValues[3]), stoi(colisValues[4]));

        colis.push_back(ColisNew);

        nbColis++;
    }
        
    fColis.close();

    return colis;
}

void Colis::ajoutColis(Colis colis) {
    fColis.open("colis.csv", ios::out | ios::app);

    fColis << colis.getIdCol() << ";"
           << colis.getvilleArr() << ";"
           << colis.getAjoutColis() << ";"
           << colis.getstatus() << ";"
           << colis.getIdTrajet()
           << "\n";

    fColis.close();
}

void Colis::sauvegarderColis(vector<Colis> colis){
    fColis.open("trajets.csv", ios::out | ios::trunc);

    for(int i = 0; i < colis.size() - 1; i++){
        fColis   << colis[i].getIdCol() << ";"
                 << colis[i].getvilleArr() << ";"
                 << colis[i].getAjoutColis() << ";"
                 << colis[i].getstatus() << ";"
                 << colis[i].getIdTrajet()
                 << "\n";
    }

    fColis.close();
}
