#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Game{
    private:
        const int SCREEN_WIDTH = 640;
        const int SCREEN_HEIGHT = 480;

        SDL_Window* mWindow;
        SDL_Renderer* mRenderer;

    public:
        Game();
        ~Game();

        void gameLoop();

};

#endif // GAME_H