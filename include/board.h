#ifndef BOARD_H
#define BOARD_H

#include<vector>

class board
{
    std::vector <int> dashes;

public:

    board();
    void display(void);
    bool cross_out(int row, int amount);
    bool is_over(void);


};

#endif // BOARD_H
