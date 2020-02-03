// goban.h

#include <iostream>

const int BOARD_WIDTH = 19;
const int BOARD_HEIGHT = 19;
const char EMPTY_STONE = ' ';
const char BLACK_STONE = '*';
const char WHITE_STONE = 'O';

enum Spot
{
    EMPTY,
    BLACK,
    WHITE,
};

class Goban
{
    public:
    Goban ();
    ~Goban ();
    void start ();
    private:
    bool put_stone ( int x, int y, char color );
    void display ();
    void clear ();
    static Goban create_sample_goban ();
    int board [ BOARD_WIDTH ] [ BOARD_HEIGHT ];
};
