//
// Created by antoine on 06/12/2021.
//

#include "Guerrier.h"
using namespace std;

Guerrier::Guerrier(){
    this-> PV = 100;
}
void Guerrier::charger(Personnage* cible) const{
    cible->recevoirDegats(10);
}