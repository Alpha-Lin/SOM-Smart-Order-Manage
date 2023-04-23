#ifndef COLIS_H
#define COLIS_H

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
        static fstream fColis;
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
        string getAjoutColis();
        void setstatus(int s);
        void setIdTrajet(int idTrajet);
        int getstatus();
        int getIdTrajet();
        static void ajoutColis(Colis c);
        static vector<Colis> readColis();
        static vector<Colis> readColisByTrajet(Trajet trajet);
        static void sauvegarderColis(vector<Colis> colis);
        static int nbColis;
};

#endif
