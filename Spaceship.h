#ifndef SPACESHIP_H
#define SPACESHIP_H
#include "Sprite.h"

class Spaceship: public Sprite
{
    public:
        Spaceship(int x, unsigned char *enemyImage);
        virtual ~Spaceship();
        
        int Lives;
        int Score;
        
        void processMovementPattern();
    protected:
    private:
};

#endif // SPACESHIP_H
