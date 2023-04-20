#include "game.h"
#include <iostream>

game::game(board &game_board, player &first_player, player &second_player)
:main_board {game_board}, player_1 {first_player}, player_2 {second_player}
{}

void game::play(void)
{
    do
    {
        std::cout << std::endl << "------ PLAYER 1 MOVE ------" << std::endl << std::endl;
        player_1.line();
        if(main_board.is_over())
            {
                std::cout << std::endl << std::endl << "*** PLAYER 2 WINS!!! ***" << std::endl << std::endl;
            }
        std::cout << std::endl << "------ PLAYER 2 MOVE ------" << std::endl << std::endl;
        player_2.line();
        if(main_board.is_over())
            {
                std::cout << std::endl << std::endl << "*** PLAYER 1 WINS!!! ***" << std::endl << std::endl;
            }

    }while (!main_board.is_over());



}
