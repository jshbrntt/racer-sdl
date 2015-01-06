#include <stdio.h>
#include <SDL.h>
#include "engine.hpp"

class SDLEngine : Engine {
public:
    SDLEngine(int width, int height, int frame_rate);
protected:
    SDL_Window *win;
    SDL_Renderer *ren;

    int Init();
    int CreateWindow();
    int CreateRenderer();
    int LoadResources();
    void Loop();
    void Quit();
};