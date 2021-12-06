#include <iostream>
#include "Phrase.cpp"
#include "Fichier.cpp"
#include <fstream>
#include <string>
#include <vector>
#include "Environnement.cpp"
#include "Equipement.cpp"
#include "Personnage.cpp"
#include "Piece.cpp"
#include "Magicien.cpp"
#include "Rodeur.cpp"
int main() {
//    Phrase* tv1 = new Phrase ("marque");
//    std::string truc;
//    Fichier fh1("text.txt");
//    tv1->AjouterMot("encore !");
//    tv1->AjouterMot("toujour");
//    tv1->AjouterMot("cependant");
//    tv1->AjouterMot("travail");
//    tv1->__repr__();
//    Phrase* une = new Phrase ("marque");
//    une = fh1.lireFichier();
//    une->__repr__();
//    std::cout<< 1 <<std::endl;
//    Phrase* deu = tv1->extraire(0,2);
//    deu->__repr__();
    Fichier fh1("texte/4.txt");
    Phrase* une = fh1.lireFichier();
    //une->__repr__();
    Environnement* env = new Environnement("1");
    //Equipement* eq1 = new Equipement(1);
    //Personnage* ps1 = new Personnage("non",1, eq1,eq1,1);
    env->preparerPieces();
    env->preparerPersonnage();
    //env->jouer();
    //act->type=2;
    //env->preparerPieces(une);
    return 0;
}
