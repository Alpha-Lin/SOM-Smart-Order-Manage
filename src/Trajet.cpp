#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Trajet.hpp"

using namespace std;

//TODO : str to time_t

Trajet::Trajet(int idchauffeur, string villedepart, string villearrivee, time_t horairedepart, time_t horairearrivee, double poids, int status){
    this->idchauffeur = idchauffeur;
    this->villedepart = villedepart;
    this->villearrivee = villearrivee;
    this->horairedepart = horairedepart;
    this->horairearrivee = horairearrivee;
    this->poids = poids;
    this->status = status;
}

Trajet::Trajet(int idtrajet, int idchauffeur, string villedepart, string villearrivee, time_t horairedepart, time_t horairearrivee, double poids, int status){
    this->idtrajet = idtrajet;
    this->idchauffeur = idchauffeur;
    this->villedepart = villedepart;
    this->villearrivee = villearrivee;
    this->horairedepart = horairedepart;
    this->horairearrivee = horairearrivee;
    this->poids = poids;
    this->status = status;
}

int Trajet::getIdTrajet(){
    return idtrajet;
}

int Trajet::getIdChauffeur(){
    return idchauffeur;
}

string Trajet::getVilledepart(){
    return villedepart;
}

string Trajet::getVillearrivee(){
    return villearrivee;
}

time_t Trajet::getHorairedepart(){
    return horairedepart;
}

time_t Trajet::getHorairearrivee(){
    return horairearrivee;
}

double Trajet::getPoids(){
    return poids;
}

int Trajet::getStatus(){
    return status;
}

void Trajet::setVilledepart(string villedepart){
    this->villedepart = villedepart;
}

void Trajet::setVillearrivee(string villearrivee){
    this->villearrivee = villearrivee;
}

void Trajet::setHorairedepart(time_t horairedepart){
    this->horairedepart = horairedepart;
}

void Trajet::setHorairearrivee(time_t horairearrivee){
    this->horairearrivee = horairearrivee;
}

void Trajet::setPoids(double poids){
    this->poids = poids;
}

void Trajet::setStatus(int status){
    this->status = status;
}

vector<Trajet> Trajet::readTrajets(){
    vector<Trajet> trajets;

    fTrajets.open("trajets.csv", ios::in);

    string trajetTmp;

    while(getline(fTrajets, trajetTmp)){
        stringstream TrajetTmpStream(trajetTmp);
  
        vector<string> trajetValues;

        string value;

        while (getline(TrajetTmpStream, value, ';'))
            trajetValues.push_back(value);

        Trajet trajetNew(stoi(trajetValues[0]), stoi(trajetValues[1]), trajetValues[2], trajetValues[3], trajetValues[4], trajetValues[5], stod(trajetValues[6]), stoi(trajetValues[7]));

        trajets.push_back(trajetNew);
    }
        
    fTrajets.close();

    return trajets;
}

void Trajet::ajoutTrajet(Trajet trajet){
    fTrajets.open("trajets.csv", ios::out | ios::app);

    fTrajets << trajet.getIdTrajet() << ";"
             << trajet.getIdChauffeur() << ";"
             << trajet.getVilledepart() << ";"
             << trajet.getVillearrivee() << ";"
             << trajet.getHorairedepart() << ";"
             << trajet.getHorairearrivee() << ";"
             << trajet.getPoids() << ";"
             << trajet.getStatus()
             << "\n";

    fTrajets.close();
}

void Trajet::sauvegarderTrajets(vector<Trajet> trajets){
    fTrajets.open("trajets.csv", ios::out | ios::trunc);
    
    for(int i = 0; i < trajets.size() - 1; i++){
        fTrajets << trajets[i].getIdTrajet() << ";"
                 << trajets[i].getIdChauffeur() << ";"
                 << trajets[i].getVilledepart() << ";"
                 << trajets[i].getVillearrivee() << ";"
                 << trajets[i].getHorairedepart() << ";"
                 << trajets[i].getHorairearrivee() << ";"
                 << trajets[i].getPoids() << "; "
                 << trajets[i].getStatus()
                 << "\n";
    }

    fTrajets.close();
}
