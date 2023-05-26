#include "Snake.h"

//Constructors to initialize each attribute.
Snake::Snake(int head, int tail){
    head = head;
    tail = tail;
}

//Access to each private attribute, which returns each one.
int Snake::getHead(){
    return head;
}

int Snake::getTail(){
    return tail;
}


