#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "player.h"

class game
{
    board &main_board;
    player &player_1;
    player &player_2;


public:

    game(board &game_board, player &first_player, player &second_player);
    void play(void);


};

#endif // GAME_H
