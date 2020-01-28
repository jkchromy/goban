// main.cpp
// testfile for Goban class
#include "goban.h"

int main ()
{
    Goban goban = Goban::create_sample_goban ();
    goban.display ();

    return 0;
}
