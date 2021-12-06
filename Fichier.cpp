//
// Created by antoine on 27/10/2021.
//

#include "Fichier.h"

Fichier::Fichier(std::string chemin)
{
    this->chemin = chemin;
}
Phrase* Fichier::lireFichier() {
    std::ifstream Fichier (this->chemin, std::ios::app);
    Phrase* tv1 = new Phrase (this->chemin);
    if(Fichier.is_open()){
        //std::cout << "Fichier ouvert" <<std::endl;
    }
    std::string input;
    while(Fichier >> input){

        tv1->AjouterMot(input);
    }
    Fichier.close();
    return tv1;
}