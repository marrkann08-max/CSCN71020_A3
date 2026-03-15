// Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "game.h"

const char* playGame(const char* player1Shape, const char* player2Shape)
{
    // check invalid inputs
    if ((strcmp(player1Shape, STR_ROCK) != 0 &&
        strcmp(player1Shape, STR_PAPER) != 0 &&
        strcmp(player1Shape, STR_SISSOR) != 0) ||
        (strcmp(player2Shape, STR_ROCK) != 0 &&
            strcmp(player2Shape, STR_PAPER) != 0 &&
            strcmp(player2Shape, STR_SISSOR) != 0))
    {
        return STR_INVALID;
    }

    // check draw
    if (strcmp(player1Shape, player2Shape) == 0)
    {
        return STR_DRAW;
    }

    // player1 winning conditions
    if ((strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_SISSOR) == 0) ||
        (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_PAPER) == 0) ||
        (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_ROCK) == 0))
    {
        return STR_PLAYER1;
    }

    // otherwise player2 wins
    return STR_PLAYER2;
}
int main()
{
    return 1;
}
