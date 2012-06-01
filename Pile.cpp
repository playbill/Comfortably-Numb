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
QStack<Element*> Pile::getPile()const{return *pile;}// /todo � remplacer par une fonction retournant un pointeur vers le haut de la pile

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
Element* Pile::depilerElement(){
    if(!pile->isEmpty())
        return pile->pop();
        return 0;
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

/** Sum d�pend du mode dans lequel est configur�e la calculatrice
  On impl�mentera cette fonction dans la classe Calculateur
void Pile::sum(unsigned int x){
  QVectorIterator<Element*> i(*pile);!< Impl�mentation de QVectorIterator
  !< On parcours toutes la pile \todo modifi� pour ne prendre que les x premier �l�ments
  if(Element* sum;
  do{   
   sum = sum + *(i.next());
   while (i.next() != pile->at(x));
}
*/
/** Mean d�pend du mode dans lequel est configur�e la calculatrice
  On impl�mentera cete fonction dans la classe Calculateur

* \fn void mean(unsigned int x)
* \brief Fonction : moyenne des x premiers �l�ments de la pile
* \param x le nombre d'�lements depuis le haut de la pile sur lesquels on fait la moyenne

void Pile::mean(unsigned int x){
     \todo impl�menter la fonction mean
}
*/
/**
* \fn void clear()
* \brief Fonction : efface tous les �lements de la pile
*/
void Pile::clear(){
pile->clear();
}

/**
* \fn  void dup()
* \brief Fonction : duplique le premier �l�ment de la pile
*/
void Pile::dup(){
if(!pile->isEmpty()){
Element* e= *(new Element*(pile->top()));/*!< on cr�e dynamyquement un pointeur d'�l�ment */
pile->push(e); /*!< on le met sur le haut de la pile */
}
}

/**
* \fn  void drop()
* \brief Fonction : supprime le premier �l�ment de la pile
*/
void Pile::drop(){
delete pile->pop(); /*!< on enl�ve l'�lement du haut de la pile et on le delete */
}
