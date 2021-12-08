//
// Created by antoine on 08/10/2021.
//
#include "Phrase.h"

// Definition du constructeur
Phrase::Phrase(std::string titre)
{
    this -> titre = titre;
}
void Phrase::SetOrdre(int ordre) {
    this->ordre = ordre;
}
void Phrase::AjouterMot(std::string c) {
    this->phrase.push_back(c);
    this->length++;
}
std::vector<std::string> Phrase::GetPhrase() {
    return this->phrase;
}
std::string Phrase::GetTitre()
{
    return this->titre;
}
Phrase* Phrase::extraire(int indexd, int indexf)
// creer une sous phrase de la phrase
{
    Phrase* tv1 = new Phrase ("marque");

    for (int i = indexd; i < indexf+1 ;i++){
          tv1->AjouterMot(this->phrase[i]);
          //std::cout<<this->phrase[i]<<std::endl;
    }

    return tv1;
}
void Phrase::__repr__()
{
    int esp = 0;
    for (std::string n : this->phrase) {
        std::cout << n << " ";
        if ((n.find('.')!= std::string::npos || n.find('!')!= std::string::npos || n.find('?')!= std::string::npos) && esp>1){

            std::cout <<std::endl;
            esp = 0;
        }else{
            esp ++;
        }
    }
    std::cout <<" " << std::endl;
;}
std::vector<Phrase*> Phrase::seekInstruction() {
    //TODO on pourrait faire ca recursivement mais faudrait merge des listes
    std::vector<int> inst;
    int idx = 0;
    std::vector<Phrase*> instructions;
    for(int i=0; i<this->length;i++) {
        if (phrase[i].find('*') != std::string::npos) {
            Phrase* text = this->extraire(idx,i-1);
            instructions.push_back(text);
            idx=i;
//            std::cout << "Found \n";
//            std::cout << " " ;
//            std::cout << i;
//            std::cout << " " ;
//            std::cout <<this->length-1;
//            std::cout << " " ;
//            std::cout << phrase[i] << std::endl;
        }
    }
    Phrase* text = this->extraire(idx,this->length-1);
    instructions.push_back(text);
//    for (auto const& i : instructions) {
//        std::cout << i->phrase[0] <<std::endl;
//    }
    /*
    if(siz==0){
        inst.push_back(this->length-1);
    }else if(siz%2 != 0){
        inst.push_back(this->length-1);
    }
    int idx = 0;
    std::vector<Phrase*> instructions;
    for (auto const& i : inst){
        Phrase* text = this->extraire(idx,i);
//        std::cout << "foufoune \n";
//        std::cout << idx ;
//        std::cout << " " ;
//        std::cout << i;
//        std::cout << " " ;
//        std::cout <<this->length-1;
//        std::cout << " " ;
//       std::cout << text->phrase[0] << std::endl;
        instructions.push_back(text);
        idx=i+1;
        //std::cout<<"fin extraction"<<std::endl;
    }*/
    return instructions;
}
Phrase::~Phrase(){

}
