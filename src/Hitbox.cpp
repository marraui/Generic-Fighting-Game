#include <Hitbox.h>

Hitbox::Hitbox( int xPos, int yPos, int width, int height ){
    mRect = { xPos, yPos, width, height };
}

Hitbox::~Hitbox(){

}

void Hitbox::render( SDL_Renderer* renderer ){
    //Draw transparent body
    SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0x60 );
    SDL_RenderFillRect( renderer, &mRect );

    //Draw solid border
    SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0xFF );
    SDL_RenderDrawRect( renderer, &mRect );

}