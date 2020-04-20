#include <SDL2/SDL.h>

#include "../include/__Renderer.h"
#include "../include/__Window.h"

inline void __Quit(__Window __Window, __Renderer __Renderer) {
    SDL_DestroyRenderer(__Renderer.address);
    SDL_DestroyWindow(__Window.address);
    SDL_Quit();
}
