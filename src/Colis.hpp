#ifndef DEF_COLIS
#define DEF_COLIS

#define AJOUTE 0
#define SOLLICITE 1
#define ACCEPTE 2
#define EN_COURS 3
#define LIVRE 4

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Trajet;

class Colis{
private:
    int idcolis;
    string villearrivee;
    string dateAjoutColis;
    int status;
    int idTrajet;
    fstream fColis;
    int poids;

public:
    Colis(string ville, string date, int status);
    Colis(int id, string ville, string date, int status, int idTrajet);
    void setIdcol(int id);
    int getIdCol();
    void setPoids(float p);
    int getPoids();
    void setvilleArr(string ville);
    string getvilleArr();
    void setAjoutColis(int id);
    int getAjoutColis();
    void setstatus(string s);
    void setTrajet(Trajet trajet);
    string getstatus();
    Trajet getIdTrajet();
    void ajoutColis(Colis c);
    vector<Colis> readColis();
    vector<Colis> readColisByTrajet(Trajet trajet);
    static int nbColis;
};

#endif
