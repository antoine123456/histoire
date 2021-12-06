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
        std::cout<<"combat :"<<std::endl;
        Magicien* ps1 = new Magicien();
        ps1->nom = "jean";
        ps1->PV=40;

        //this->personnage->bouleDeFeu(ps1);
        return this->pieceAct->numero;
    }else if(this->phraseAct->phrase[0]=="*ARME*"){
        std::cout<<"arme :";
        return this->pieceAct->numero;
    }else if(this->phraseAct->phrase[0]=="*ARMURE*"){
        std::cout<<"armure :";
        return this->pieceAct->numero;
    }else if(this->phraseAct->phrase[0]=="*VICTOIRE*"){
        std::cout<<"victoire :";
        return -1;
    }else if(this->phraseAct->phrase[0]=="*GO*"){
        std::cout<<"fin :";
        return -1;
    }else{
        this->phraseAct->__repr__();
        return this->pieceAct->numero;
    }
    //std::cout<<"finEXEC"<<std::endl;
    return -1;
}
void Environnement::preparerPersonnage(){
    Rodeur* ps1 = new Rodeur();
    ps1->nom = "jean";
    ps1->Argent=40;
    Rodeur* ps2 = new Rodeur();
    ps2->nom = "jean";
    ps2->Argent=40;
    ps1->detrousser(ps2);
    std::cout<<ps2->Argent<<std::endl;

    //this->personnage = ps1;
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
        suite = deriv;
         //std::cout << suite <<"\n" ;
         //system("pause");
    }
    std::cout << "Bye Bye" <<"\n" ;
    system("pause");
}