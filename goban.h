// goban.h

#include <iostream>

struct board-dimension
{
    const int WIDTH = 19;
    const int HEIGHT = 19;
};

struct spot
{
    const int EMPTY = 0;
    const int BLACK = 1;
    const int WHITE = 2;
};

struct stone
{
    const char EMPTY = ' ';
    const char BLACK = '*';
    const char WHITE = 'O';
};

class Goban
{
    public:
    Goban ();
    display ();
    clear ();
    private:
    ~Goban ();
    int width;
    int height;
    int board [ width ] [ height ];
};
