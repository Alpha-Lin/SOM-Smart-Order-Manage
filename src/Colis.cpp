#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Colis.hpp"
#include "Trajet.hpp"

using namespace std;

// Lecture d'un Colis
Colis::Colis(int id, string ville, string date, int status, int idTrajet) {
    this->idcolis = id;
    this->villearrivee = ville;
    this->dateAjoutColis = date;
    this->status = status;
    this->idTrajet = idTrajet;
}

// Création d'un Colis
Colis::Colis(string ville, string date, int status) {
    this->idcolis = nbColis++;
    this->villearrivee = ville;
    this->dateAjoutColis = date;
    this->status = status;
    this->idTrajet = -1;
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

void Colis::setTrajet(Trajet trajet){
    this->trajet = trajet;
}

int Colis::getAjoutColis() {
    return dateAjoutColis;
}

void Colis::setstatus(string s) {
    status = s;
}

string Colis::getstatus() {
    return status;
}

Trajet Colis::getIdTrajet() {
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

vector<Colis> Colis::readColisByTrajet(Trajet trajet){
    vector<Colis> colis;

    fColis.open("colis.csv", ios::in);

    string colisTmp;

    while(getline(fColis, colisTmp)){
        stringstream ColisTmpStream(colisTmp);
  
        vector<string> colisValues;

        string value;

        while (getline(ColisTmpStream, value, ';'))
            colisValues.push_back(value);

        if(stoi(colisValues[4]) == trajet.getIdTrajet()){
            Colis ColisNew(stoi(colisValues[0]), colisValues[1], colisValues[2], stoi(colisValues[3]), trajet);

            colis.push_back(ColisNew);
        }
    }
        
    fColis.close();

    return colis;
}

void Dispatcher::ajoutColis(Colis colis) {
    fColis.open("colis.csv", ios::out | ios::app);

    fColis << colis.getIdCol() << ";"
           << colis.getvilleArr() << ";"
           << colis.getAjoutColis() << ";"
           << colis.getstatus() << ";"
           << colis.getTrajet().getIdTrajet()
           << "\n";

    fColis.close();
}