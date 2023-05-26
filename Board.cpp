#include "Board.h"

//We initialize a list for each snake and ladder. The first number is the first tile the player will be at, and the second number is the next tile the player will be at.
Board::Board(){
    snakes.insert({ 5, 2 });
    snakes.insert({ 17, 14 });
    snakes.insert({ 26, 23 });

    ladders.insert({ 16, 19 });
    ladders.insert({ 25, 28 });
    ladders.insert({ 7, 4 });
}

//The tile type will be determined by the number the snake or ladder is at.
char Board::getTileType(int numTile){
    //If there's a snake or ladder in said snake or ladder, 'count' will return '1'.
    if (snakes.count(numTile) > 0){
        //Return tile type (char).
        return 'S';
    }
    else if (ladders.count(numTile) > 0){
        return 'L';
    }
    //If that's not the case, then the tile type is "N".
    else{
        return 'N';
    }
}

//Method to get the next tile.
int Board::getNextTile(int numTile) {
    //If the tile returns '1' with "count", then return the tile number the snake or ladder is at.
    if (snakes.count(numTile) > 0){
        return snakes[numTile];
    }
    else if (ladders.count(numTile) > 0){
        return ladders[numTile];
    }
    //Otherwise, return the tile number.
    else{
        return numTile;
    }
}

//This method returns the player's new position, along with the tile type, which are needed to know where the player stands.
pair<int, char> Board::getFinalPosition(int actPosition, int dice) {
    //The next position will be the current position plus the number the dice's draw.
    int newPos = actPosition + dice;
    //The tile type will be determined by the new position.
    char TileType = getTileType(newPos);

    //If the tile type is "S", "L" or "N", then the next position will be determined by the method getNextTile(), and the return value is stored in "newPos".
    //The tile type will be determined by the method getTileType().
    //If the tile type is "S":
    if (TileType == 'S') {
        newPos = getNextTile(newPos);
        TileType = getTileType(newPos);
    }
    else if (TileType == 'L') {
        newPos = getNextTile(newPos);
        TileType = getTileType(newPos);
    }
    //If the next position turns out to be greater than 30, then it'll be 30, and the tile type is "N".
    else if (newPos > 30) {
        newPos = 30;
        TileType = 'N';
    }
    //This returns a pair, which is composed by the next position and the tile type.
    return make_pair(newPos, TileType);
}

