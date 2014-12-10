#include <stdio.h>
#include "sdl_engine.hpp"

SDLEngine::SDLEngine(int width, int height, int frame_rate)
        : Engine(width, height, frame_rate) {
    if (Init() == 0) {
        Loop();
    }
}

int SDLEngine::Init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("SDL_Init Error: %s\n", SDL_GetError());
        return 1;
    }
    printf("SDL_Init Successful\n");
    return CreateWindow();
}

int SDLEngine::CreateWindow() {
    win = SDL_CreateWindow("Hello World!", 100, 100, width_, height_, SDL_WINDOW_SHOWN);
    if (win == nullptr) {
        printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    printf("SDL_CreateWindow Successful\n");
    return CreateRenderer();
}

int SDLEngine::CreateRenderer() {
    ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == nullptr) {
        SDL_DestroyWindow(win);
        printf("SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    printf("SDL_CreateRenderer Successful\n");
    return LoadResources();
}

int SDLEngine::LoadResources() {
    return 0;
}

void SDLEngine::Loop() {

}