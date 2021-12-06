//
// Created by Martin on 05/12/2021.
//

#include "Guerrier.h"
using namespace std

Guerrier::Guerrier() : PV(100)
{

}
void Guerrier::charger(Personnage &cible) const
{
    cible.recevoirDegats(10);
}
