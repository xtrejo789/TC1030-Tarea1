#include "Ladder.h"

//Constructor to initialize both attributes.
Ladder::Ladder(int beginning, int thend){
    beginning = beginning;
    thend = thend;
}

//Access to private attributes, which returns each one.
int Ladder::getBeginning(){
    return beginning;
}

int Ladder::getThend(){
    return thend;
}
