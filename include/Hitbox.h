#ifndef HITBOX_H
#define HITBOX_H

#include <SDL2/SDL.h>

class Hitbox
{
private:
    SDL_Rect mRect;
public:
    Hitbox(int xPos, int yPos, int width, int height);
    ~Hitbox();
    
    void render( SDL_Renderer* renderer, int relativeX = 0, int relativeY = 0 );
    int getWidth();
    int getHeight();
    int getPosX();
    int getPosY();

};


#endif //HITBOX_H