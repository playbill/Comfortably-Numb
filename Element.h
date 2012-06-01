/**
 * \file Element.h
 * \brief Contient la classe Element
 * \author Charrier Lucas et Rossier Titouan
 * \version 0.1
 * \date 31 Mai 2012
 *
 * La classe element est la classe abstraite de base.
 *
 *
 */

#ifndef ELEMENT_H
#define ELEMENT_H

#include <QString>
#include <iostream>

/**
 * \class Element
 * \brief Classe abstraite de base
 *
 */

class Element{
    private:

    public:
            Element(){};
            virtual ~Element(){};
            Element(const Element& e){};
            /**
            * Les classes filles de Element doivent pouvoir
            * être transformer en toutes autres classe filles
            * en fonction du mode de la calculette
            */
            
            /**
            * \fn virtual Qstring toQstring()
            * \brief transforme l'élément en Qstring pour l'afficher sur la calculatrice
            * Fonction virtual pure qui doit être implémenter par toutes les classes filles
            */
            virtual QString toQstring() = 0;
            
            /**
            * \fn  virtual QString toReel() = 0;
            * \brief transforme l'élément en réel pour pouvoir l'utiliser 
            * Fonction virtual pure qui doit être implémenter par toutes les classes filles
            */

            virtual Element* toReel() = 0;
            virtual Element* toRationnel() = 0;
            virtual Element* toEntier() = 0;
            virtual Element* toComplexe() = 0;
            

};
#endif // ELEMENT_H
