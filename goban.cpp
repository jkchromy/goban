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
	    int spot = board [ i ][ j ];
            if ( spot == Spot::EMPTY )
	    {
		std::cout << EMPTY_STONE;
	    }
	    else if ( spot == Spot::BLACK )
	    {
		std::cout << BLACK_STONE;
	    }
	    else if ( spot == Spot::WHITE )
	    {
		std::cout << WHITE_STONE;
	    }
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
