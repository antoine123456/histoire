//
// Created by antoine on 17/11/2021.
//
#include "Personnage.h"
#include "Environnement.h"
#include "Equipement.h"
#include "Piece.h"
#include <string>
#include <vector>
#include "Magicien.h"
#include "Rodeur.h"
#include "Arme.h"
#include "Guerrier.h"
#include "Monstre.h"
Environnement::Environnement(std::string name)
{
    Equipement* arme = new Equipement(1);
    Equipement* armure = new Equipement(1);
    //Personnage* res = new Personnage("bonjour",1,arme,armure,1);
    //this->personnage = res;
    this->name  = name;
}
int Environnement::execAction(){
    //std::cout<<text->phrase[0]<<std::endl;
    if(this->phraseAct->phrase[0]=="*PATH*"){
        if(this->phraseAct->phrase[1]==this->phraseAct->phrase[2]){
            //std::cout<< "la" <<std::endl;
            return std::stoi(this->phraseAct->phrase[1]);
        }
        int x=0;
        while(x>2 || x<1){
            std::cout<<"Chemin :";
            std::cin >> x; // Get user input from the keyboard
        }
        return std::stoi(this->phraseAct->phrase[x]);
    }else if(this->phraseAct->phrase[0]=="*COMBAT*"){
        std::cout<<"Combat contre un "<< this->phraseAct->phrase[1] <<std::endl;
        Monstre mst1 = Monstre();
        mst1.PV = std::stoi(this->phraseAct->phrase[2]);
        mst1.PA = std::stoi(this->phraseAct->phrase[3]);
        while(mst1.PV>0){
            mst1.PV=0;
        }
        Phrase* sortie = this->phraseAct->extraire(4,this->phraseAct->length-1);
        sortie->__repr__();
        return this->pieceAct->numero;
    }else if(this->phraseAct->phrase[0]=="*ARME*"){
        std::cout<<"vous rammassez l'arme : "<<this->phraseAct->phrase[1]<<std::endl;
        Arme arm1 = Arme(std::stoi(this->phraseAct->phrase[2]));
        arm1.type = this->phraseAct->phrase[1];
        Phrase* sortie = this->phraseAct->extraire(3,this->phraseAct->length-1);
        sortie->__repr__();
        return this->pieceAct->numero;
    }else if(this->phraseAct->phrase[0]=="*ARMURE*"){
        std::cout<<"vous rammassez l'armure : "<<this->phraseAct->phrase[1]<<std::endl;
        Armure arm1 = Armure(std::stoi(this->phraseAct->phrase[2]));
        arm1.type = this->phraseAct->phrase[1];
        Phrase* sortie = this->phraseAct->extraire(3,this->phraseAct->length-1);
        sortie->__repr__();
        return this->pieceAct->numero;
    }else if(this->phraseAct->phrase[0]=="*VICTOIRE*"){
        std::cout<<"victoire :";
        return -1;
    }else if(this->phraseAct->phrase[0]=="*GO*"){
        std::cout<<"defaite :";
        return -1;
    }else{
        this->phraseAct->__repr__();
        return this->pieceAct->numero;
    }
    //std::cout<<"finEXEC"<<std::endl;
    return -1;
}

void Environnement::preparerPersonnage(){
//    Rodeur ps1 =  Rodeur();
//    ps1.nom = "jean";
//    ps1.Argent=40;
//    Rodeur ps2 = Rodeur();
//    ps2.nom = "jean";
//    ps2.Argent=40;
//    ps1.detrousser(&ps2);
//    std::cout<<ps2.Argent<<std::endl;
//    ps1.creerPersonnage();
//    this->personnage = &ps1;
//    assignerArmeArmure();
    std::cout<< "## Nouveau Personnage ##" << std::endl;
    std::cout<< "Choix du nom" << std::endl;
    std::cout<< "nom : ";
    char x[1024];
    std::cin >> x ;
    std::cout<<  std::endl << "Choix du type" << std::endl;
    for(std::map<int,std::string>::iterator it = typesPersonnage.begin(); it != typesPersonnage.end(); ++it) {
        std::cout<< it->first<<". "<<it->second << std::endl;
    }
    int w =0 ;
    while(w>typesPersonnage.size() || w<1) {
        std::cout<< "type :  ";
        std::cin >> w;
        std::cout<< std::endl;
    }
    Personnage ps1;
    if(w==1){
        Guerrier ps1 = Guerrier();
    }else if(w==2){
        Rodeur ps1 = Rodeur();

    } else {
        Magicien ps1 = Magicien();
    }
    ps1.nom = x;
    ps1.type = typesPersonnage.find(w)->second;
    ps1.PV = typesPersonnage.find(w)->first;
    Arme arm1 = Arme(w);
    ps1.arme = &arm1;
    Armure arm2 = Armure(w);
    ps1.armure = &arm2;
    ps1.PA = arm1.PA;
    ps1.PD = arm2.PD;
    ps1.__repr__();
    this->personnage = &ps1;
}
void Environnement::preparerPieces(){
    //TODO creer la classe piece qui interprète les instruction et creer leurs objet
    //TODO attribuer les numéros aux pièces
    for(int i= 0 ; i<9; i++){
        Piece* piec = new Piece(i);//numero piece inutile
        piec->creerActionList();
        this->pieces.push_back(piec);
    }
    /*
    std::vector<int> inst = phrase->seekInstruction();
    std::cout << inst[1] <<"\n" ;
    Piece* piece =
    */
    //Piece->actionList.push_back() = phrase->extraire(0,inst[0]-1);
    //Piece->instr = phrase;
    //Piece->processInstr();
}
void Environnement::jouer(){
    int suite = 0;
    int deriv = 0;
    while(suite!=-1){
        this->pieceAct=this->pieces[suite];
        this->phraseAct =  this->pieceAct->nextAction();
        deriv = this->execAction();
        if(deriv!=suite){
            this->pieces[suite]->vider();
        }
        suite =deriv;
        //std::cout << suite <<"\n" ;
    }
    system("pause");

//    std::cout << "Bye Bye" <<"\n" ;
//    system("pause");
}