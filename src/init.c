#include "../include/kaiser.h"

#include <stdlib.h>

struct game_state* init() {

    const int screenWidth = SCREEN_WIDTH;
    const int screenHeight = SCREEN_HEIGHT;

    InitWindow(screenWidth, screenHeight, "Operation kaiser");

    struct game_state* game_state = (struct game_state*)malloc(sizeof(game_state));

    free(game_state); /* each malloc needs a free idiom */

}
