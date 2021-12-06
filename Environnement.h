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
    std::map<int, std::string> typesArmes = {{1, "Epee",},
                                   {2, "Dagues",},
                                   {3, "Baton",}};
    std::map<int, std::string> typesArmures = {{1, "Cuirasse",},
                                     {2, "Cuir",},
                                     {3, "Tissus",}};
    std::map<std::string,int > typesPersonnage = {{"Guerrier",1,},
                                     {"Rodeur",2, },
                                     {"Mage",3, }};
    Personnage* personnage;
    std::string name;
    std::vector<Phrase*> contenu;
    Piece* pieceAct;
    Phrase* phraseAct;
public:
    void preparerPersonnage();
    void reprPersonnage();
    void preparerPieces();
    void actionCreator(Phrase *);
    Environnement(std::string name);
    int execAction();
    void jouer();
    std::vector<Piece*> pieces;
};


#endif //EVALUATION_ENVIRONNEMENT_H
