#ifndef PLAYER_H
#define PLAYER_H

#include "Dice.h"

#include <cstdlib>

//"Player" inherits class "Dice", which is featured in the methods.
class Player{
    //Public methods.
    public:
        Player();
        int getPosition() const;
        void setPosition(int _position);
        Dice throwDice();
    //Private attributes.
    private:
        int position;
};

#endif // PLAYER_H
