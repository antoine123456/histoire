//
// Created by antoine on 05/12/2021.
//
#include "Phrase.h"
#include "Fichier.h"
#include "Piece.h"
Piece::Piece(int numero) {
    this->numero = numero;
}
void Piece::creerActionList() {
    char name[20];
    //std::cout<<this->numero<<std::endl;
    sprintf(name, "texte/%d.txt", this->numero);
    Fichier fich(name);
    Phrase* contenu = fich.lireFichier();
    this->actionList = contenu->seekInstruction();
}
Phrase* Piece::nextAction(){
    Phrase* info = this->actionList[this->compteur];
    this->compteur++;
    return info;
}
void Piece::vider(){
    this->compteur=0;
}