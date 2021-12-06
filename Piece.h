//
// Created by antoine on 05/12/2021.
//

#ifndef EVALUATION_PIECE_H
#define EVALUATION_PIECE_H
#include "Phrase.h"
#include <vector>
class Piece {

private:
    int compteur=0;
public:
    int numero;
    std::vector<Phrase*> actionList;//ordre
    Phrase* nextAction();
    void creerActionList();
    void vider();
    //
    Piece(int);
};


#endif //EVALUATION_PIECE_H
