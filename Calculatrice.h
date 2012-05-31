#ifndef CALCULATRICE_H
#define CALCULATRICE_H

enum {entier, rationnel, reel}

class Calculatrice{
    private:
            QStack<Element *>* pile; /* Impl�mentation de Qstack pour la pile*/
            bool radiant; /*  true si le mode radiant est activ� */
            bool complexe; /* true si le mode complexe est activ� */
            Mode typeDeConstante /* entier, rationnelle, o� reel */
    public:
            calculatrice();
            ~calculatrice();

};


#endif // CALCULATRICE_H
