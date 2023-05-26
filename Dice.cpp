#include "Dice.h"
#include <cstdlib>
#include <ctime>

//When time is 0, the method will return a random number, which is a multiple of 6 plus 1.
int Dice::throwdice(){
    time(0);
    return rand() % 6 + 1;
}
