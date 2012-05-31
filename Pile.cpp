/**
 * \file Pile.cpp
 * \brief Contient l'impl�mentation des fonctions de Pile.h
 * \author Charrier Lucas et Rossier Titouan
 * \version 0.1
 * \date 31 Mai 2012
 *
 */

#include "Pile.h" 


Pile* Pile::instanceUnique = 0;/*!< mise � 0 de l'�lement instanceUnique */

/**
* \fn Pile()
* \brief Fonction :  constructeur, construit la pile
*/
Pile::Pile(): pile(new QStack<Element*>()){}

/**
* \fn ~Pile()
* \brief Fonction :  constructeur, construit la pile
*/
Pile::~Pile(){delete pile;}

/**
* \fn  Pile& donneInstance()
* \brief Fonction :  acc�der au singleton Pile
* \return pointeur vers la pile
*/
Pile& Pile::donneInstance(){
    if(instanceUnique == 0)
        instanceUnique = new Pile;
    return *instanceUnique;
}

/**
* \fn static void libereInstance()
* \brief Fonction :  remet � 0 le pointeur instanceUnique
*/
void Pile::libereInstance(){
    if(instanceUnique != 0)
        delete instanceUnique;
    instanceUnique = 0;
}

/**
* \fn Qstack<Element*> getPile()
* \brief Fonction :  r�cup�re un pointeur sur le haut de la pile
* \return : pointeur vers la pile
*/
QStack<Element*> Pile::getPile()const{return *pile;}

/**
* \fn  void empilerExpression(Expression * cons)
* \brief Fonction : empiler un �l�ment sur la pile
 */
void Pile::empilerElement(Element * e){
    pile->push(e);
}

 /**
* \fn  void depilerElement()
* \brief Fonction : depile l'�l�ment le plus haut sur la pile
* \param e l'�l�ment � empiler
* \return : �lement d�pil�
*/
Element& Pile::depilerElement(){
    if(!pile->isEmpty())
        return *(pile->pop());
}

 /**
* \fn  void swap(const unsigned int x,const unsigned int y)
* \brief Fonction : inversion de l'�l�ment num�ro x et l'�l�ment num�ro y de la pile
* \param x , y les �l�ments de numero x et y depuis le haut de la pile
*/
void Pile::swap(const unsigned int x,const unsigned int y){
    if(!pile->isEmpty()){
        if( (x <pile->size()) && (y<pile->size())){
            Element * e = pile->at(x);
            pile->replace(x,pile->at(y));
            pile->replace(y,e);
        }
    }
}

/**
* \fn  void sum(int x)
* \brief Fonction : somme des x premiers �l�ments de la pile
* \param x le nombre d'�lements somm�s depuis le haut de la pile
*/
void Pile::sum(unsigned int x){
   /* \todo impl�menter la fonction sum */
}

 /**
* \fn void mean(unsigned int x)
* \brief Fonction : moyenne des x premiers �l�ments de la pile
* \param x le nombre d'�lements depuis le haut de la pile sur lesquels on fait la moyenne
*/
void mean(unsigned int x){
    /* \todo impl�menter la fonction mean */
}

/**
* \fn void clear()
* \brief Fonction : efface tous les �lements de la pile
*/
void clear(){
/* \todo impl�menter la fonction mean */
}

/**
* \fn  void dup()
* \brief Fonction : duplique le premier �l�ment de la pile
*/
void dup(){
/* \todo impl�menter la fonction mean */
}

/**
* \fn  void drop()
* \brief Fonction : supprime le premier �l�ment de la pile
*/
void drop(){
/* \todo impl�menter la fonction drop */
}
