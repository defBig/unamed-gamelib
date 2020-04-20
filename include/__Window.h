#ifndef __WINDOW_H
#define __WINDOW_H

#include <SDL2/SDL.h>

typedef struct {
    SDL_Window *address;
    char *title;
    int x, y, width, height;
    Uint32 flags;
} __Window;

inline void __SetWindowTitle(char *title);

inline void __SetWindowX(int x);

inline void __SetWindowY(int x);

inline void __SetWindowWidth(int width);

inline void __SetWindowHeight(int height);

inline void __SetWindowFlags(Uint32 flags);

inline int __GetWindowX(int x);

inline int __GetWindowY(int x);

inline int __GetWindowWidth(int width);

inline int __GetWindowHeight(int height);

inline Uint32 __GetWindowFlags(Uint32 flags);

#endif
