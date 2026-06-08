#include "../include/kaiser.h"

#include <stdio.h>

void draw_obstacles(const struct game_state* game_state)
{
    int i;

    for(i = 0; i < MAX_OBSTACLES; i++){
        DrawRectangle(
            game_state->obstacle_state->all_obstacles[i]->coordinate_position->x,
            game_state->obstacle_state->all_obstacles[i]->coordinate_position->y,
            game_state->obstacle_state->all_obstacles[i]->width,
            game_state->obstacle_state->all_obstacles[i]->height,
            RED
        );
    }
}

/* Maybe we return an int for error handling purposes
 *  return 0 and end-of-function if successful, 1 otherwise
 **/
void draw(struct game_state* game_state)
{

    BeginDrawing();
        struct player* player = &(game_state->player); // local player pointer assigned to malloc'd game_state->player member

        ClearBackground(RAYWHITE);

        /* Draw Obastacles */
        draw_obstacles(game_state);

        DrawRectangleV(player->pos, player->size, LIGHTGRAY);

    EndDrawing();

    return;

}
