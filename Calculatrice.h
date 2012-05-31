#ifndef CALCULATRICE_H
#define CALCULATRICE_H

enum {entier, rationnel, reel}

class Calculatrice{
    private:
            QStack<Element *>* pile; /* Implémentation de Qstack pour la pile*/
            bool radiant; /*  true si le mode radiant est activé */
            bool complexe; /* true si le mode complexe est activé */
            Mode typeDeConstante /* entier, rationnelle, où reel */
    public:
            calculatrice();
            ~calculatrice();

};


#endif // CALCULATRICE_H
