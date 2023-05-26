#ifndef BOARD_H
#define BOARD_H

#include <map>
#include "Snake.h"
#include "Ladder.h"

using namespace std;

class Board{
    //Public methods of class "Board"
    public:
        Board();
        pair<int, char> getFinalPosition(int actPosition, int dice);
        char getTileType(int numTile);
        int getNextTile(int numTile);

    //Private attributes of class "Board"
    private:
        map<int, int> snakes;
        map<int, int> ladders;
};

#endif // BOARD_H
