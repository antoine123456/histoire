//
// Created by antoine on 17/11/2021.
//

#include "Personnage.h"
Personnage::Personnage() {
//    this->nom = nom;
//    this->type = type;
//    this->arme=arme;
//    this->armure=armure;
//    this->PV=PV;
    this->Argent = 10;
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

void Personnage::__repr__(){

    std::cout<< "## Caracteristiques ##" << std::endl;
    std::cout<< "nom    : "<<this->nom<<std::endl;
    std::cout<< "type   : "<<this->type<<std::endl;
    std::cout<< "Argent : "<<this->Argent<<std::endl;
    std::cout<< "PV     : "<<this->PV<<std::endl;
    std::cout<< "arme   : "<<this->arme->type<<std::endl;
    std::cout<< "PA     : "<<this->arme->PA<<std::endl;
    std::cout<< "armure : "<<this->armure->type<<std::endl;
    std::cout<< "PD     : "<<this->armure->PD<<std::endl;
}