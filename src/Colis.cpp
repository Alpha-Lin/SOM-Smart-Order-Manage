#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Colis.hpp"
using namespace std;


Colis::Colis(int id, string  ville, string  date, int status) {
    this->idcolis = id;
    this->villearrivee = ville;
    this->dateAjoutColis = date;
    this->status = status;
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

int Colis::getAjoutColis() {
    return dateAjoutColis;
}

void Colis::setstatus(string s) {
    status = s;
}

string Colis::getstatus() {
    return status;
}

void Dispatcher::ajoutColis(const Colis& c) {
    fColis.open("colis.csv", ios::out | ios::app);

    fColis << c.getIdCol() << ";"
           << c.getvilleArr() << ";"
           << c.getAjoutColis() << ";"
           << c.getstatus()
           << "\n";

    fColis.close();
}