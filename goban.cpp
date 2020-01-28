// goban.cpp

#include "goban.h"

Goban::Goban ()
{
    std::cout << "Creating Goban" << std::endl;
    clear ();
}

Goban::~Goban ()
{
    std::cout << "Destroying Goban" << std::endl;
}

void Goban::display ()
{
    for ( int i = 0; i < BOARD_WIDTH ; i++ )
    {
	for ( int j = 0; j < BOARD_HEIGHT; j++ )
	{
	    std::cout << board [ i ][ j ] << " ";
	}
	// end of row
	std::cout << std::endl;
    }
    // end of board
    std::cout << std::endl;
}

void Goban::clear ()
{
    for ( int i = 0; i < BOARD_WIDTH; i++ )
    {
	for ( int j = 0; j < BOARD_HEIGHT; j++ )
	{
	    board [ i ][ j ] = Spot::EMPTY;
	}
    }
}

Goban Goban::create_sample_goban ()
{
    Goban goban;

    for ( int i = 0; i < BOARD_WIDTH; i++ )
    {
	for ( int j = 0; j < BOARD_HEIGHT; j++ )
	{
	    goban.put_stone ( i, j, BLACK_STONE );
	}
    }

    return goban;
}

bool Goban::put_stone ( int x, int y, char color )
{
    if ( board [ x ][ y ] != EMPTY_STONE
         || x < 1 || x > BOARD_WIDTH || y < 1 || y > BOARD_HEIGHT )
    {
#ifdef DEBUG
	{
	    std::cout << "failed to place " << color << " stone ";
	    std::cout << "at position " << x << ", " << y << std::endl;
	}
#endif
	return false;
    }
    else
    {
        board [ x ][ y ] = color;
    }

    return true;
}
