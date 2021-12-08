//
// Created by antoine on 17/11/2021.
//

#ifndef EVALUATION_ENVIRONNEMENT_H
#define EVALUATION_ENVIRONNEMENT_H
#include <iostream>
#include <map>
#include <string>
#include "Phrase.h"
#include "Piece.h"
class Environnement {

private:
    // TODO sort de ca
    std::map<int,std::string> typesPersonnage = {{1,"Guerrier",},
                                                 {2,"Rodeur", },
                                                 {3,"Magicien", }};
    Personnage* personnage;
    std::string name;
    std::vector<Phrase*> contenu;
    Piece* pieceAct;
    Phrase* phraseAct;
public:
    void preparerPersonnage();
    void preparerPieces();
    Environnement(std::string name);
    int execAction();
    void jouer();
    std::vector<Piece*> pieces;
};


#endif //EVALUATION_ENVIRONNEMENT_H
