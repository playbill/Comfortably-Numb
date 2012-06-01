#ifndef REEL_H
#define REEL_H

#endif // REEL_H

#include "Constante.h"

class Reel : public Constante{
    private:
            float x;
    public:
            Reel(float r):x(r){}
            virtual QString toQstring();
            Element* toReel(){return this;} /*!< on retourne un pointeur vers l'objet */
            virtual Element* toRationnel();
            virtual Element* toEntier();
            virtual Element* toComplexe();
            void afficher(std::ostream& f=std::cout) const;
            Reel& operator+(Constante& c);
            Reel& operator-(Constante& c);
            Reel& operator/(Constante& c);
            Reel& operator*(Constante& c);
            Reel& pow(int x);
            Reel& cos();
            Reel& sin();
            Reel& tan();
            Reel& cosh();
            Reel& sinh();
            Reel& tanh();
            Reel& ln();
            Reel& log();
            Reel& inv();
            Reel& sqrt();
            Reel& sqr();
            Reel& operator!();

};
