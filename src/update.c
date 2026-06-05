#include "../include/kaiser.h"

#include "raylib.h"
#include "raymath.h"

struct game_state* update(struct game_state* game_state) {

    struct player* player = &(game_state->player);

    Vector2 dir = {0, 0};

    if (IsKeyDown(KEY_LEFT))    dir.x -= 1;
    if (IsKeyDown(KEY_RIGHT))   dir.x += 1;
    if (IsKeyDown(KEY_UP))      dir.y -= 1;
    if (IsKeyDown(KEY_DOWN))    dir.y += 1;

    // normalize so that moving on an angle is no faster than moving straight
    // scale by framerate and speed
    player->vel = Vector2Scale(Vector2Normalize(dir), player->speed*GetFrameTime());
    player->pos = Vector2Add(player->pos, player->vel);

    return game_state;
}
