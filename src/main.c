#include <__.h>

int main(int argc, char *argv) {
    __SetWindowTitle("Pong");
    __Init();
    __DrawRect(
        __GetWindowWidth() / 16,
        __GetWindowHeight() / 2 - (__GetWindowHeight() / 10),
        __GetWindowWidth() / 128,
        __GetWindowHeight() / 5
    );
    __Quit();
    return 0;
}
