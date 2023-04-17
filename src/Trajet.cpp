#include <iostream>

using namespace std;

class Trajet{
    public:
        Trajet(int idchauffeur, string villedepart, string villearrivee, time_t horairedepart, time_t horairearrivee, double poids, int status);
        int getIdTrajet();
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
    private:
        int idtrajet;
        int idchauffeur;
        string villedepart;
        string villearrivee;
        time_t horairedepart;
        time_t horairearrivee;
        double poids;
        int status;
};

Trajet::Trajet(int idchauffeur, string villedepart, string villearrivee, time_t horairedepart, time_t horairearrivee, double poids, int status){
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
    returns status;
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
