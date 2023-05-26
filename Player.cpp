#include "Player.h"

//Since the first position would be 1, the constructor is initialized in 1.
Player::Player(){
    position = 1;
}

//Get the private attribute "position" by making a getPosition() method. This method is a read-only function since it won't modify the attribute.
int Player::getPosition() const{
    return position;
}

//Modify the position.
void Player::setPosition(int _position){
    position = _position;
}

//The method, which is of type "Dice", is accessing the method "throwdice" of "Dice" by creating an object.
Dice Player::throwDice(){
    Dice dice;
    dice.throwdice();
}

