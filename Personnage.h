//
// Created by antoine on 17/11/2021.
//

#ifndef EVALUATION_PERSONNAGE_H
#define EVALUATION_PERSONNAGE_H
#include <string>
#include "Equipement.h"
#include "Arme.h"
#include "Armure.h"
#include <map>
class Personnage {
private :

public:
    void recevoirDegats(int degats);
    void infligerDegats(Personnage* cible, int degats);
    Arme* arme;
    Armure* armure;

    std::string type;
    int getPV();
    void setPV(int);
    int getArgent();
    void setArgent(int);
    void __repr__();
    Personnage();
    int PV;
    int PA;
    int PD;
    std::string nom;
    int Argent;
};


#endif //EVALUATION_PERSONNAGE_H
