//
// Created by antoine on 06/12/2021.
//

#ifndef EVALUATION_MAGICIEN_H
#define EVALUATION_MAGICIEN_H


#include <iostream>
#include <string>
#include "Personnage.h"

class Magicien : public Personnage{
public:
    Magicien();
    int savate = 12;
    void bouleDeFeu(Personnage* cible) const;
    void bouleDeGlace(Personnage* cible) const;
};

#endif //EVALUATION_MAGICIEN_H
