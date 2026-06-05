#include "../include/kaiser.h"

#include "raylib.h"

void draw(const struct game_state *game_state) {

    BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("The inception of the Kaiser project. I've never watched inception.", 190, 200, 20, LIGHTGRAY);

        struct player* player = &(game_state->player);

        DrawRectangleV(player->pos, player->size, LIGHTGRAY);

    EndDrawing();

    return;

}
