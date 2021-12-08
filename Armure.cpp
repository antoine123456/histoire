//
// Created by antoine on 07/12/2021.
//

#include "Armure.h"
Armure::Armure(int type) : Equipement(type){
    if(type<typesArmures.size()+1){
        this->PD = typesArmures.find(type)->first;
        this->type = typesArmures.find(type)->second;
    }else{
        this->PD=type;
    }
}