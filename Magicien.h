//
// Created by Martin on 05/12/2021.
//

#ifndef CPP_MAGICIEN_H
#define CPP_MAGICIEN_H

#include <iostream>
#include <string>
#include "Personnage.h"

class Magicien : public Personnage{
public:
    Magicien();
    void bouleDeFeu(Personnage &cible) const;
    void bouleDeGlace(Personnage &cible) const;
};


#endif //CPP_MAGICIEN_H
