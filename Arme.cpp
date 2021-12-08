//
// Created by antoine on 07/12/2021.
//

#include "Arme.h"
Arme::Arme(int type) : Equipement(type) {
    if(type<typesArmes.size()+1){
        this->PA = typesArmes.find(type)->first;
        this->type = typesArmes.find(type)->second;
    }else{
        this->PA=type;
    }
}