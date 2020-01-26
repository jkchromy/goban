// goban.cpp

#include "goban.h"

Goban::Goban ()
{
    std::cout << "Creating Goban" << std::endl;
    width = board-dimension.WIDTH;
    height = board-dimentsion.HEIGHT;
    clear ();
}

Goban::~Goban ()
{
    std::cout << "Destroying Goban" << std::endl;
}

Goban::display ()
{
    for ( int i = 0; i < width; i++ )
    {
	for ( int j = 0; j < height; j++ )
	{
	    int spot = board [ i ][ j ];
            if ( spot == spot.EMPTY )
	    {
		std::cout << stone.EMPTY_SYMBOL;
	    }
	    else if ( spot == spot.BLACK )
	    {
		std::cout << stone.BLACK_SYMBOL;
	    }
	    else if ( spot == spot.WHITE )
	    {
		std::cout << stone.WHITE_SYMBOL;
	    }
	}
    }
}

Goban::clear ()
{
    for ( int i = 0; i < width; i++ )
    {
	for ( int j = 0; j < width; j++ )
	{
	    board [ i ][ j ] = spot.EMPTY;
	}
    }
}
