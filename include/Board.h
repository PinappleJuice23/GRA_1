#ifndef BOARD_H
#define BOARD_H


class Board
{
    private:
        int board_size;
        char** tab;
    public:
        Board(int board_size);
        ~Board();
        char** create_board();
        int Getsize();
        int Diplay();
        void SetPoition();
};

#endif // BOARD_H
