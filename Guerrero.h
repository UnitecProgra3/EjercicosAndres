#ifndef GUERRERO_H
#define GUERRERO_H

#include "Personaje.h"

class Guerrero : public Personaje
{
    public:
        Guerrero(int ataque, int vida);
        void especial();
        virtual ~Guerrero();
    protected:
    private:
};

#endif // GUERRERO_H
