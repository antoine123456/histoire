//
// Created by antoine on 06/12/2021.
//

#include "Rodeur.h"
using namespace std;
Rodeur::Rodeur() {
    this->PV=80;
}
void Rodeur::detrousser(Personnage* cible) const
{
    int moni=cible->getArgent();
    cible->setArgent(0);
    std::cout<<cible->nom<<" c'est fait détrousser"<<std::endl;
    //TODO actualiser Argent du Rodeur à Argent+moni
}
