#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <Game.h>

int main(int argc, char* args[] ) {
    printf( "Hello world!\n" );

    Game* game = new Game();

    printf( "Game initialized succesfully!\n");

    delete game;
}