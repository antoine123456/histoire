//
// Created by antoine on 06/12/2021.
//

#ifndef EVALUATION_RODEUR_H
#define EVALUATION_RODEUR_H

#include <iostream>
#include <string>
#include "Personnage.h"

class Rodeur : public Personnage{
public:
    Rodeur();
    void detrousser(Personnage* cible) const;
};

#endif //EVALUATION_RODEUR_H
