#include "../include/kaiser.h"

#include <stdlib.h>
#include "raylib.h"

game_state_t* init() {

    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Operation kaiser");

    struct game_state* game_state = (game_state*)malloc(sizeof(game_state));

    game_state->foo = 67;
    game_state->bar = 69;

}
