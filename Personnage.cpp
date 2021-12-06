//
// Created by antoine on 17/11/2021.
//

#include "Personnage.h"
Personnage::Personnage(/*std::string nom, int type,Equipement* arme,Equipement* armure, int PV*/) {
//    this->nom = nom;
//    this->type = type;
//    this->arme=arme;
//    this->armure=armure;
//    this->PV=PV;
}
Personnage::Personnage(const char string[8]) {

}
int Personnage::getPV() {
    return this->PV;
}
void Personnage::setPV(int PV){
    this->PV = PV;
}
void Personnage::setArgent(int Argent) {
    this->Argent = Argent;
}
int Personnage::getArgent() {
    return this->Argent;
}
void Personnage::recevoirDegats(int degats) {
    this->PV -= degats;
}
void Personnage::infligerDegats(Personnage* cible, int degats) {
    cible->recevoirDegats(degats);
}