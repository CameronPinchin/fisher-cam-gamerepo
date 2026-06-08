#include "../include/kaiser.h"

#include <stdlib.h>

struct game_state* init() {

    const int screenWidth = SCREEN_WIDTH;
    const int screenHeight = SCREEN_HEIGHT;

    InitWindow(screenWidth, screenHeight, "Operation kaiser");

    struct game_state* game_state = malloc(sizeof(*game_state));

    // initialize our player
    struct player* player = &(game_state->player);

    player->pos = (Vector2){screenWidth/2, screenHeight/2};
    player->vel = (Vector2){0, 0};
    player->size = (Vector2){50, 50};
    player->speed = 50.0;

    return game_state;
}
