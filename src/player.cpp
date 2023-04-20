#include "player.h"
#include <iostream>


player::player(board &Board):main{Board}
{}

void player::line(void)
{
    int row, amount;
    bool rv;
    do
    {
        main.display();
        std::cout << "MAKE YOUR MOVE" << std::endl << std::endl;
        std::cout << "Row: ";
        std::cin >> row;
        std::cout << "Amount of dashes: ";
        std::cin >> amount;
        rv = main.cross_out(row,amount);

    } while(!rv && std::cout <<std:: endl <<"INVALID INPUT - TRY AGAIN" <<std::endl << std::endl);

    main.display();
}
