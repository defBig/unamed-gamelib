#include <SDL2/SDL.h>

#include "../include/__Window.h"

#include "../include/__Default.h"

inline void __SetWindowTitle(char *title) {
    __D_Window.title = title;
}

inline void __SetWindowX(int x) {
    __D_Window.x = x;
}

inline void __SetWindowY(int y) {
    __D_Window.y = y;
}

inline void __SetWindowWidth(int width) {
    __D_Window.width = width;
}

inline void __SetWindowHeight(int height) {
    __D_Window.height = height;
}

inline void __SetWindowFlags(Uint32 flags) {
    __D_Window.flags = flags;
}

inline int __GetWindowX(int x) {
    return __D_Window.x;
}

inline int __GetWindowY(int y) {
    return __D_Window.y;
}

inline int __GetWindowWidth(int width) {
    return __D_Window.width;
}

inline int __GetWindowHeight(int height) {
    return __D_Window.height;
}

inline Uint32 __GetWindowFlags(Uint32 flags) {
    return __D_Window.flags;
}
