//
// Created by antoine on 06/12/2021.
//

#ifndef EVALUATION_GUERRIER_H
#define EVALUATION_GUERRIER_H

#include <iostream>
#include <string>
#include "Personnage.h"

class Guerrier : public Personnage{
public:
    Guerrier();
    void charger(Personnage* cible) const;
    //il faudrait inclure l'arme pour que la charge inflige le nb de degats correspondant à l'arme
};

#endif //EVALUATION_GUERRIER_H
