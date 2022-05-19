#include "Board.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Board::Board(int board_size) : board_size{board_size}
{
    create_board();
}

int Board::Getsize()
{
    return board_size;
}

char** Board::create_board()
{
    tab = new char*[this->board_size];
    for(int i =0;i<board_size;i++)
    {
        tab[i] = new char[this->board_size];
    }
    for(int i=0;i<board_size; i++)
    {
        for(int j=0; j < board_size;j++)
        {
            tab[i][j]=' ';
        }
    }
    return tab;
}
int Board::Diplay()
{
    for(int i = 0; i < board_size; i++)
    {
        for(int j = 0; j <board_size; j++)
        {
            cout<<"["<<tab[i][j]<<"]";
        }
        cout<<endl;
    }

}
void
Board::~Board()
{
    //dtor
}
