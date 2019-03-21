#include <Character.h>
#include <SDL2/SDL.h>
#include <algorithm>

Character::Character( int posX, int posY, int width, int height ){
    mPosX = posX;
    mPosY = posY;
    mSpeedX = 0;
    mSpeedY = 0;
    mWidth = width;
    mHeight = height;

    mHitbox = new Hitbox( 0, 0, width, height);
}

Character::~Character(){
}

void Character::render( SDL_Renderer* renderer ){
    mHitbox->render( renderer, mPosX, mPosY );
}

void Character::handleInput( InputKeyboard* inputKeyboard ){
    if( inputKeyboard->IsKeyTriggered( SDL_SCANCODE_RIGHT ) ){
        mSpeedX += X_SPEED;
    }
    if( inputKeyboard->IsKeyTriggered( SDL_SCANCODE_LEFT ) ){
        mSpeedX -= X_SPEED;
    }
    if( inputKeyboard->IsKeyReleased( SDL_SCANCODE_RIGHT ) ){
        mSpeedX -= X_SPEED;
    }
    if( inputKeyboard->IsKeyReleased( SDL_SCANCODE_LEFT ) ){
        mSpeedX += X_SPEED;
    }
}

void Character::move( Stage* stage){
    if ( stage->getFloorLevel() - getSolidHeight() == mPosY + mHitbox->getPosY() ){
        mSpeedY = 0;
    }
    else{
        mSpeedY += stage->getGravity();
    }

    mPosX += (int)mSpeedX;
    mPosY += (int)mSpeedY;

    mPosY = std::min( mPosY + (int)mSpeedY, stage->getFloorLevel() - getSolidHeight() );
}

int Character::getSolidWidth(){
    return mHitbox->getWidth();
}

int Character::getSolidHeight(){
    return mHitbox->getHeight();
}