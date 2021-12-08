//
// Created by antoine on 07/12/2021.
//

#ifndef EVALUATION_ARME_H
#define EVALUATION_ARME_H

#include <map>
class Arme : public Equipement{
private:
    std::map<int, std::string> typesArmes = {{1, "Epee",},
                                             {2, "Dagues",},
                                             {3, "Baton",}};

public :
    int PA;
    Arme(int type);
};


#endif //EVALUATION_ARME_H
