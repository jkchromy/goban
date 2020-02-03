// goban.cpp

#include "goban.h"
#include <string>

Goban::Goban ()
{
    std::cout << "Creating Goban" << std::endl;
    clear ();
}

Goban::~Goban ()
{
    std::cout << "Destroying Goban" << std::endl;
}

void Goban::start ()
{
    std::cout << "Game is starting..." << std::endl;
    bool game_running = true;
    bool blacks_turn = true;
    while ( game_running )
    {
	display ();
	std::string response = "";
	std::cout << std::endl << "Enter coordinates <x y> or q to quit: ";
	std::getline ( std::cin, response);
	if ( response.at ( 0 ) == 'q' )
	    game_running = false;
	else if ( response.size () < 3 )
	    continue;
	else
	{
	    int stone = BLACK_STONE;
	    int x = (int) response.at ( 0 ) - 48;
	    int y = (int) response.at ( 2 ) - 48;
	    if ( !blacks_turn )
		    stone = WHITE_STONE;
	    put_stone ( x, y, stone );
	    blacks_turn = !blacks_turn;
	}
    }
}

void Goban::display ()
{
    for ( int j = 0; j < BOARD_HEIGHT; j++ )
    {
        for ( int i = 0; i < BOARD_WIDTH ; i++ )
	    std::cout << board [ i ][ j ] << " ";
	// end of row
	std::cout << std::endl;
    }
    // end of board
    std::cout << std::endl;
}

void Goban::clear ()
{
    for ( int j = 0; j < BOARD_HEIGHT; j++ )
        for ( int i = 0; i < BOARD_WIDTH; i++ )
	    board [ i ][ j ] = EMPTY_STONE;
}

Goban Goban::create_sample_goban ()
{
    Goban goban;

    for ( int j = 0; j < BOARD_HEIGHT; j++ )
        for ( int i = 0; i < BOARD_WIDTH; i++ )
	    goban.put_stone ( i, j, BLACK_STONE );

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
        board [ x ][ y ] = color;

    return true;
}
