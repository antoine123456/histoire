//
// Created by antoine on 07/12/2021.
//

#ifndef EVALUATION_ARMURE_H
#define EVALUATION_ARMURE_H

#include <map>
class Armure : public Equipement{
public :
    std::map<int, std::string> typesArmures = {{1, "Cuirasse",},
                                               {2, "Cuir",},
                                               {3, "Tissus",}};
public :
    int PD;
    Armure(int i);
};


#endif //EVALUATION_ARMURE_H
