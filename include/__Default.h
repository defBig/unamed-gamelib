#ifndef __DEFAULT_H
#define __DEFAULT_H

#include "__Window.h"
#include "__Renderer.h"

__Window __D_Window = {
    .address = NULL,
    .title = "Game",
    .x = SDL_WINDOWPOS_CENTERED,
    .y = SDL_WINDOWPOS_CENTERED,
    .width = 1280,
    .height = 720,
    .flags = 0
};

__Renderer __D_Renderer = {
    .address = NULL,
    .flags = 0
};

#endif
