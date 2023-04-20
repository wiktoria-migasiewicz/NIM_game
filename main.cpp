#include <iostream>
#include "board.h"
#include "player.h"
#include "game.h"

using namespace std;

int main()
{
    board main_board;
    player player_1(main_board);
    player player_2(main_board);
    game main_game(main_board, player_1, player_2);

    main_game.play();


    return 0;
}
