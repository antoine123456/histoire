//
// Created by antoine on 06/12/2021.
//

#include "Magicien.h"
using namespace std;
Magicien::Magicien() {
    this->PV = 70;
}
void Magicien::bouleDeFeu(Personnage* cible) const {
    cible->recevoirDegats(30);
    std::cout << cible->nom << " est br�l�." << std::endl;
}
void Magicien::bouleDeGlace(Personnage* cible) const {
    cible->recevoirDegats(30);
    std::cout << cible->nom << " est gel�." << std::endl;
}