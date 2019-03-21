#ifndef CHARACTER_H
#define CHARACTER_H

#include <SDL2/SDL.h>
#include <Hitbox.h>
#include <InputKeyboard.h>

class Character
{
private:
    const int X_SPEED = 20;
    const int Y_SPEED = 20;

    int mPosX;
    int mPosY;
    int mSpeedX;
    int mSpeedY;
    int mWidth;
    int mHeight;
    Hitbox* mHitbox;

public:
    Character( int posX, int posY, int width, int height );
    ~Character();

    void render( SDL_Renderer* renderer );

    void handleInput( InputKeyboard* inputKeyboard );

    void move();
};


#endif // CHARACTER_H