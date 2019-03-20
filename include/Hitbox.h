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
    void render( SDL_Renderer* renderer );
};


#endif //HITBOX_H