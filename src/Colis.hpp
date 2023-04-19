#ifndef DEF_COLIS
#define DEF_COLIS

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Colis{
private:
    int idcolis;
    string villearrivee;
    string dateAjoutColis;
    int status; //0 pour colis rajouté, 1 pour livraison sollicité, 2 livraison acceptée, 3 livraison en cours, 4 colis livré

public:
    Colis(int id, string ville, string date, int status);
    void setIdcol(int id);
    int getIdCol();
    void setvilleArr(int id);
    string getvilleArr();
    void setAjoutColis(int id);
    int getAjoutColis();
    void setstatus(int id);
    string getstatus();
    void ajoutColis(const Colis& c);

    };

#endif
