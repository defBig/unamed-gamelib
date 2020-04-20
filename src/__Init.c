#include <SDL2/SDL.h>

#include "../include/__Window.h"
#include "../include/__Renderer.h"

int __Init(__Window __Window, __Renderer __Renderer) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_Log("__: Error: Couldn't initialize SDL: %s", SDL_GetError());
        return -1;
    }

    if ( !( __Window.address = SDL_CreateWindow(__Window.name, __Window.x, __Window.y, __Window.width, __Window.height, __Window.flags) ) ) {
        SDL_Log("Error: Couldn't create window: %s", SDL_GetError());
        SDL_Quit();
        return -1;
    }

    if ( !( __Renderer.address = SDL_CreateRenderer(__Window.address, -1, __Renderer.flags) ) ) {
        SDL_Log("Error: Couldn't create renderer: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    return 0;
}
