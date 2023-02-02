#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>


const int SCREEN_WIDTH = 800; //width screen window for SDL
const int SCREEN_HEIGHT = 600; //height screen window for SDL

int main( int argc, char* args[] )
{
    // init SDL

    Game game = initGame();

    runGame(game);

    cleanGame(&game);

}