#include "board.h"
#include <iostream>

board::board()
{
    dashes = {1, 3, 5, 7};
}

void board::display()
{
    for(unsigned int i = 0; i < dashes.size() ; i++)
        {
            std::cout << i << ": ";
            for(int j = 0; j < dashes[i]; j++)
                {
                    std::cout << "|";
                }
            std::cout << std::endl << std::endl;
        }
     std::cout << std::endl;
}

bool board::cross_out(int row, int amount)
{
    if(row >= 0 && row <= dashes.size() && amount > 0 && amount <= dashes[row])
        {
            dashes[row] -= amount;
            return 1;
        }
    return 0;
}

bool board::is_over(void)
{
    for (unsigned int i = 0; i < dashes.size(); i++)
        {
            if (dashes[i] > 0)
            return false;
        }
    return true;
}
