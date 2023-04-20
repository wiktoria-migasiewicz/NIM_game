#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"

class player
{
    board &main;


public:

    player(board &Board);
    void line(void);

};

#endif // PLAYER_H
