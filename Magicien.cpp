//
// Created by Martin on 05/12/2021.
//

#include "Magicien.h"
using namespace std

Magicien::Magicien() : PV(70)
{

}
void Magicien::bouleDeFeu(Personnage &cible) const {
    cible.recevoirDegats(30);
    std::cout << cible.nom << "est brûlé." << std::endl;
}
void Magicien::bouleDeGlace(Personnage &cible) const {
    cible.recevoirDegats(30);
    std::cout << cible.nom << "est gelé." << std::endl;
}