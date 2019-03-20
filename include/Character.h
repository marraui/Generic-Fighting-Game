#ifndef CHARACTER_H
#define CHARACTER_H

#include <SDL2/SDL.h>
#include <Hitbox.h>

class Character
{
private:
    int mPosX;
    int mPosY;
    int mWidth;
    int mHeight;
    Hitbox* mHitbox;

public:
    Character( int posX, int posY, int width, int height );
    ~Character();

    void render( SDL_Renderer* renderer );
};


#endif // CHARACTER_H