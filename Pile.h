/**
 * \file Pile.h
 * \brief Contient la classe Pile
 * \author Charrier Lucas et Rossier Titouan
 * \version 0.1
 * \date 31 Mai 2012
 *
 * La classe pile permet d'empiler les constantes.
 * Elle impl�mente le design patern singleton ainsi qu'une pile Qstack.
 *
 */

#ifndef PILE_H
#define PILE_H

#include <QStack> /*!< Pour pouvoir utiliser Qstack*/
#include <iostream>
#include "Element.h"


/**
 * \class Pile
 * \brief Classe permetant de g�rer une pile d'�l�ment.
 * Impl�mentation avec le design patern singleton
 */

class Pile{
    private:
            QStack<Element*>* pile; /*!< Impl�mentation de Qstack pour la pile, pile de pointeur de valeur*/
            static Pile* instanceUnique;/*!< Pointeur unique sur instance */
            Pile();
            Pile(const Pile&);
            ~Pile();
    public:

            /**
            * \fn static Pile& donneInstance()
            * \brief Fonction :  acc�der au singleton Pile
            * \return pointeur vers la pile
            */
            static Pile& donneInstance();

             /**
            * \fn static void libereInstance()
            * \brief Fonction :  remet � 0 le pointeur instanceUnique
            */
            static void libereInstance();

             /**
            * \fn Qstack<Element*> getPile()
            * \brief Fonction :  r�cup�re un pointeur sur le haut de la pile
            * \return : pointeur vers la pile
            */
            QStack<Element*> getPile()const;

             /**
            * \fn  void empilerExpression(Expression * cons)
            * \brief Fonction : empiler un �l�ment sur la pile
            */
            void empilerElement(Element * e);

             /**
            * \fn  void depilerElement()
            * \brief Fonction : depile l'�l�ment le plus haut sur la pile
            * \param e l'�l�ment � empiler
            * \return : �lement d�pil�
            */
            Element* depilerElement();

             /**
            * \fn  void swap(const unsigned int x,const unsigned int y)
            * \brief Fonction : inversion de l'�l�ment num�ro x et l'�l�ment num�ro y de la pile
            * \param x , y les �l�ments de numero x et y depuis le haut de la pile
            */
            void swap(const unsigned int x,const unsigned int y);

            /**
            * \fn  void sum(int x)
            * \brief Fonction : somme des x premiers �l�ments de la pile
            * \param x le nombre d'�lements somm�s depuis le haut de la pile
            */
            void sum(unsigned int x);

            /**
            * \fn void mean(unsigned int x)
            * \brief Fonction : moyenne des x premiers �l�ments de la pile
            * \param x le nombre d'�lements depuis le haut de la pile sur lesquels on fait la moyenne
            */
            void mean(unsigned int x);

            /**
            * \fn void clear()
            * \brief Fonction : efface tous les �lements de la pile
            */
            void clear();

            /**
            * \fn  void dup()
            * \brief Fonction : duplique le premier �l�ment de la pile
            */
            void dup();

            /**
            * \fn  void drop()
            * \brief Fonction : supprime le premier �l�ment de la pile
            */
            void drop();
};

#endif // PILE_H
