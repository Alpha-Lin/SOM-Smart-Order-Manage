#ifndef DISPATCHER_H
#define DISPATCHER_H

#include <iostream>
#include "Personne.hpp"
#include "Trajet.hpp"

using namespace std;

class Dispatcher : public Personne{
    private:
        vector<Colis> colis;

    public:
        Dispatcher(string nom, string prenom, string adresse, string email, string motDePasse);
        void remplir();
        void dispatch();
};

#endif
