#ifndef REEL_H
#define REEL_H

#endif // REEL_H

#include "Constante.h"

class Reel : public Constante{
    private:
            float x;
    public:
            Reel(float r):x(r){}
            virtual QString toQstring()= 0;
            void afficher(std::ostream& f=std::cout){}
            Reel& operator+(Constante& c);
            Reel& operator-(Constante& c);
            Reel& operator/(Constante& c);
            Reel& operator*(Constante& c);
            Reel& pow(int x);
            Reel& cos();
            Reel& sin();
            Reel& tan();
            Reel& cosh();
            Reel& singh();
            Reel& tanh();
            Reel& ln();
            Reel& log();
            Reel& inv();
            Reel& sqrt();
            Reel& sqr();
            Reel& operator!();

};
