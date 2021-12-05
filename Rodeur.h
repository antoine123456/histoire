//
// Created by Martin on 05/12/2021.
//

#ifndef CPP_RODEUR_H
#define CPP_RODEUR_H

#include <iostream>
#include <string>
#include "Personnage.h"

class Rodeur : public Personnage{
public:
    Rodeur();
    void detrousser(Personnage &cible) const;
};


#endif //CPP_RODEUR_H
