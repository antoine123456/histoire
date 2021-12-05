//
// Created by Martin on 05/12/2021.
//

#include "Rodeur.h"
using namespace std

Rodeur::Rodeur() : PV(80)
{

}
void Rodeur::detrousser(Personnage &cible) const
{
    moni=cible.getArgent();
    cible.setArgent(0);
    //TODO actualiser Argent du Rodeur à Argent+moni
}