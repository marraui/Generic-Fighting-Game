#include <Character.h>
#include <SDL2/SDL.h>

Character::Character( int posX, int posY, int width, int height ){
    mPosX = posX;
    mPosY = posY;
    mWidth = width;
    mHeight = height;

    mHitbox = new Hitbox( 0 + posX, 0 + posY, width, height);
}

Character::~Character(){
}

void Character::render( SDL_Renderer* renderer ){
    mHitbox->render( renderer );
}