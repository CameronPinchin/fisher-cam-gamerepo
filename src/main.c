#include "raylib.h"

int main(void) {

    init();

    while (!WindowShouldClose()) {

        update();

        draw();

    }

    CloseWindow();

    return 0;

}
