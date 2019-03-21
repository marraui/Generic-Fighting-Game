#include <Hitbox.h>
#include <SDL2/SDL.h>

Hitbox::Hitbox( int xPos, int yPos, int width, int height ){
    mRect = { xPos, yPos, width, height };
}

Hitbox::~Hitbox(){

}

void Hitbox::render( SDL_Renderer* renderer, int relativeX, int relativeY ){
    SDL_Rect rectToRender = { relativeX + mRect.x, relativeY + mRect.y, mRect.w, mRect.h };

    //Draw transparent body
    SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0x60 );
    SDL_RenderFillRect( renderer, &rectToRender );

    //Draw solid border
    SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0xFF );
    SDL_RenderDrawRect( renderer, &rectToRender );

}